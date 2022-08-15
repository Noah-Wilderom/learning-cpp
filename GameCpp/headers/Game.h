#pragma once
#include <string>
struct Game {
    bool GameIsRunning;
    std::string Data;

    void init();

    bool Save();
    bool SaveFileExists();

    void GameLoop();
};



