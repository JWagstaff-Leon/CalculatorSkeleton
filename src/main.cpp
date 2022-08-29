////////////////////////////////////////////////////////////////////////////
/**
 *  @file   main.cpp
 *  @date   Fri April 16 2021
 *  @brief  Entry Point of Shell
 */
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <stdio.h>
#include <ncurses.h>

#include "InputHandler.hpp"
#include "Path.hpp"

void setupNcurses();
void closeNcurses();

int main() 
{
    InputHandler inputHandler;
    Path activeDirectory;
    setupNcurses();
    printw(activeDirectory.getPathString().c_str());
    while(inputHandler.processInput(getch()));
    closeNcurses();
    return 0;
};

void setupNcurses()
{
    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);
};

void closeNcurses()
{
    endwin();
};