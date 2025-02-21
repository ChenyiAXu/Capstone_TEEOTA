/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN2VIEWBASE_HPP
#define SCREEN2VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen2_screen/Screen2Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/mixins/ClickListener.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/canvas/Line.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>

class Screen2ViewBase : public touchgfx::View<Screen2Presenter>
{
public:
    Screen2ViewBase();
    virtual ~Screen2ViewBase();
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::ClickListener< touchgfx::Box > box1;
    touchgfx::ScalableImage snapshot_image;
    touchgfx::Line line1;
    touchgfx::PainterRGB565 line1Painter;
    touchgfx::Line line2;
    touchgfx::PainterRGB565 line2Painter;
    touchgfx::Line line3;
    touchgfx::PainterRGB565 line3Painter;
    touchgfx::Line line4;
    touchgfx::PainterRGB565 line4Painter;
    touchgfx::Line line5;
    touchgfx::PainterRGB565 line5Painter;
    touchgfx::Line line6;
    touchgfx::PainterRGB565 line6Painter;
    touchgfx::Line line7;
    touchgfx::PainterRGB565 line7Painter;
    touchgfx::Line line8;
    touchgfx::PainterRGB565 line8Painter;
    touchgfx::Line line9;
    touchgfx::PainterRGB565 line9Painter;
    touchgfx::Line line10;
    touchgfx::PainterRGB565 line10Painter;
    touchgfx::Line line11;
    touchgfx::PainterRGB565 line11Painter;
    touchgfx::Line h_line1;
    touchgfx::PainterRGB565 h_line1Painter;
    touchgfx::Line h_line2;
    touchgfx::PainterRGB565 h_line2Painter;
    touchgfx::Line h_line3;
    touchgfx::PainterRGB565 h_line3Painter;
    touchgfx::Line h_line4;
    touchgfx::PainterRGB565 h_line4Painter;
    touchgfx::Line h_line5;
    touchgfx::PainterRGB565 h_line5Painter;
    touchgfx::Line h_line6;
    touchgfx::PainterRGB565 h_line6Painter;
    touchgfx::Line h_line7;
    touchgfx::PainterRGB565 h_line7Painter;
    touchgfx::Line h_line8;
    touchgfx::PainterRGB565 h_line8Painter;
    touchgfx::Line h_line9;
    touchgfx::PainterRGB565 h_line9Painter;
    touchgfx::Line h_line10;
    touchgfx::PainterRGB565 h_line10Painter;
    touchgfx::Line h_line11;
    touchgfx::PainterRGB565 h_line11Painter;
    touchgfx::Circle circle1;
    touchgfx::PainterRGB565 circle1Painter;
    touchgfx::Circle circle2;
    touchgfx::PainterRGB565 circle2Painter;

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 3600;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

};

#endif // SCREEN2VIEWBASE_HPP
