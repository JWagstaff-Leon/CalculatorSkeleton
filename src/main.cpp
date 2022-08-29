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

void setupInputContext();
void closeInputContext();

int main() 
{
    InputHandler inputHandler;
    setupInputContext();
    while(true)
    {
        int input = getch();
        inputHandler.processInput(input);
    }
    closeInputContext();
    return 0;
};

void setupInputContext()
{
    initscr();              // open ncurses
    raw();                  // setup ncurses
    noecho();               // "
    keypad(stdscr, TRUE);   // "
};

void closeInputContext()
{
    endwin(); // close ncurses
};