#pragma once

#include <renderer.h>

namespace Stick {

    class Game{
    private:
        bool m_isWindowClosed;
        Renderer m_Renderer;

    public:
        Game();

        void play();
        void update();
};

}
