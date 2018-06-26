#pragma once

#include <iostream>
#include <string>
#include <ctype.h>
#include <conio.h>
#include <assets/stickimage.h>

namespace Stick {

class Renderer
{
public:
    void draw(std::string screen);
    void draw(char object[]);
    void clear();
};

}
