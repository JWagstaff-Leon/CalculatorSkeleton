#include "Path.hpp"

#include <deque>
#include <string>
#include <string>

Path::Path()
{
    std::deque<std::string> emptyPath;
    setPath(emptyPath);
};

Path::Path(std::deque<std::string> initialPath)
{
    setPath(initialPath);
};

void Path::setPath(std::deque<std::string> path)
{
    std::deque<std::string> newPath;
    for(std::deque<std::string>::iterator it = path.begin(); it != path.end(); it++)
    {
        std::string pathString = *it;
        newPath.push_back(pathString);
    }
    currentPath = newPath;
};

std::string Path::getPathString()
{
    std::string pathString = "~";
    for(std::deque<std::string>::iterator it = currentPath.begin(); it != currentPath.end(); it++)
    {
        pathString += "/";
        pathString += *it;
    }
    return pathString;
};

std::vector<std::string> Path::listDirectoryContents()
{
    
};

void Path::navigateUp()
{
    if(currentPath.size() > 0)
        currentPath.pop_back();
};

void Path::navigateDown(std::string)
{
    
};