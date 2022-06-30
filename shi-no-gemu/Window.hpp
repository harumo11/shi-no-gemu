#pragma once
#include <string>
#include <tuple>

class Window
{
public:

    const std::string title = "shi no game";
    const int width;
    const int height;
    Window(const int width = 640, const int height = 480);
    std::tuple<double, double> center();
};

Window::Window(const int x, const int y): width(x), height(y){
}

std::tuple<double, double> Window::center() {
    return { (double)this->width / 2.0, (double)this->height / 2.0 };
}

