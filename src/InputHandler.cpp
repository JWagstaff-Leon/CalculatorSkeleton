#include <ncurses.h>
#include <cctype>

#include "InputHandler.hpp"

InputHandler::InputHandler()
{
    initializeEntry();
    printw(currentEntry);
    refresh();
};

InputHandler::~InputHandler()
{
    // REVIEW is this needed?
};

void InputHandler::initializeEntry()
{
    currentEntry[0] = 0;
    currentEntrySize = 0;
};

void InputHandler::assignEntry(std::string newEntry)
{
    const int MAX_SIZE = newEntry.length();
    const char* NEW_C_STR = newEntry.c_str();
    for(int i = 0; i < 255 && i < MAX_SIZE && NEW_C_STR[i] != 0; i++)
    {
        currentEntry[i] = NEW_C_STR[i];
        currentEntrySize = i;
    }
    currentEntry[currentEntrySize + 1] = 0;
};

void InputHandler::processInput(int input)
{
    if(input == 10)
    {
        initializeEntry();
        return;
    }

    if(input == KEY_UP)
    {
        assignEntry("Previous history...");
    }
    else if(input == KEY_DOWN)
    {
        assignEntry("Forward history...");
    }
    else if(currentEntrySize < 255)
    {
        currentEntry[currentEntrySize] = (char)input;
        currentEntrySize++;
        currentEntry[currentEntrySize] = 0;
    }
    
    printw(currentEntry);
    refresh();
};