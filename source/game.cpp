#include <game.h>

namespace Stick {

void Game::play()
{
    m_isWindowClosed = false;
}

void Game::update()
{
    m_Renderer.draw("clrscreen");
}

}
