#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <string>

class InputHandler
{
    private:
        char currentEntry[256];
        int currentEntrySize = 0;

        void initializeEntry();
        void assignEntry(std::string);

    public:
        InputHandler();
        ~InputHandler();

        void processInput(int input);
};

#endif