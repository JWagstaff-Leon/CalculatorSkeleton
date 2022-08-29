#ifndef WORKING_DIRECTORY_H
#define WORKING_DIRECTORY_H

#include <string>
#include <vector>
#include <deque>

class Path
{
    private:
        std::deque<std::string> currentPath;
        void setPath(std::deque<std::string>);

    public:
        Path();
        Path(std::deque<std::string>);

        std::string getPathString();
        std::vector<std::string> listDirectoryContents();

        void navigateUp();
        void navigateDown(std::string);
};

#endif