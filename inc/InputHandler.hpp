#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <unordered_map>

class InputHandler
{
    private:
        std::unordered_map<int, void (*)()> inputMap;
            
    public:
        InputHandler();
        ~InputHandler();

        bool mapInput(int input, void (*callback)());
        void processInput(int input);
};

#endif