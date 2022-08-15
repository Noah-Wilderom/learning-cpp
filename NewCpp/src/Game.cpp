#include <iostream>
#include "../headers/Game.h"
#include <fstream>

auto GameIsRunning = false;

void Game::init()
{
    std::cout << "Starting game..." << std::endl;

    this->GameIsRunning = true;
    this->GameLoop();
};

bool Game::SaveFileExists()
{
    std::ifstream SaveFile("../player/account.key");
    return !!SaveFile;
}

bool Game::Save()
{
//    if(this->SaveFileExists())
//    {
        std::ofstream SaveFile("../player/account.key");

        SaveFile << this->Data;
//    }
}

void Game::GameLoop()
{
    while (this->GameIsRunning)
    {
        this->Save();

        this->GameIsRunning = false;
    }

}