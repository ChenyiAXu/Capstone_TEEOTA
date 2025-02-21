#!/bin/bash -

error_config()
{
  echo "postbuild script failed"
  echo "====="
  if [ -z $1 ]; then
    echo "===== Error occurred."
  else
    echo "===== Error occurred. ($1)"
  fi
  echo "===== See $current_log_file for details. Then try again."
  echo "====="
  if [ "$script_mode" != "AUTO" ]; then $SHELL; fi
  exit 1
}

sucess_config()
{
  rm $current_log_file
  echo "postbuild script success"
  echo

  # ============================================================= End functions ===================================================
  # All the steps were executed correctly
  if [ "$mode" != "AUTO" ]; then $SHELL; fi
  exit 0
}

install_package()
{
  echo "Please get STM32H5 Secure Manager package from st.com." |tee -a $current_log_file
  error_config "env"
}


##########################
#  post_build.sh
##########################
# Environment variables for log files
thispath=$(cd "$(dirname "$0")" && pwd)
applidir=$(cd "$(dirname "$0")"/.. && pwd)
config=$*

# Getting the Trusted Package Creator and STM32CubeProgammer CLI path
if [[ -z "$stm32tpccli" ]] || [[ -z "$sm_ns_app_boot_path_project" ]]; then
  if [ -e "$applidir/env.sh" ]; then
    source $applidir/env.sh 2>/dev/null
  else
    echo "env.sh missing"
    install_package
  fi
fi
current_log_file="$thispath/postbuild.log"
echo "Generated by sh"> $current_log_file

#Copy SMAK Appli binary to Binary location
cp -p "$applidir/STM32CubeIDE/$config/STM32H573I-DK_aws_ri_tz.bin" "$applidir/Binary/appli.bin" >>$current_log_file 2>&1
if [ $? -ne 0 ]; then
  error_config 'copy';
else
  echo "file is copied"
fi

"$stm32tpccli" -pb "$applidir/Images/SM_Code_Image.xml" >>$current_log_file 2>&1
if [ $? -ne 0 ]; then
  error_config 'image';
fi

"$stm32tpccli" -pb "$applidir/Images/SM_Code_Image_bin.xml" >> $current_log_file 2>&1
if [ $? -ne 0 ]; then
  error_config 'bin';
else
  sucess_config
fi
