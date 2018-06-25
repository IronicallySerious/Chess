#pragma once

namespace StickMan {

class Game{
private:
    bool m_isWindowClosed;

public:
    Game();

    void play();
    void update();
};

}
