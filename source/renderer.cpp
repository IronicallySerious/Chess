#include <renderer.h>
#include <assets/stickimage.h>

namespace Stick {
    void Renderer::draw(std::string screen)
    {
        for(int i = 0; i < screen.size(); i++)
        {
            screen[i] = tolower(screen[i]);
        }

        if(screen == "clrscreen")
        {
            clrscr();
        }
        else if (screen == "game")
        {
            std::cout << "Welcome to the Stick game!\n"
                         "In this game you have a stick\n"
                         "And you can move it, lol." << std::endl;
        }
        else
        {
            std::cout << "Invalid draw command" << std::endl;
        }

        draw(Assets::Stick);
    }
}
