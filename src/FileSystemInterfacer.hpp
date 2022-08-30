#ifndef FS_INTERFACER_H
#define FS_INTERFACER_H

#include <string>

class FileSystemInterfacer
{
    private:
        FileSystemInterfacer();

    public:
        static void createFile(std::string path, std::string name);
        static void moveFile(std::string from, std::string to);
        static void renameFile(std::string path, std::string oldName, std::string newName);
        static void deleteFile(std::string);

        static void createDirectory(std::string path, std::string name);
        static void moveDirectory(std::string from, std::string to);
        static void renameDirectory(std::string path, std::string oldName, std::string newName);
        static void deleteDirectory(std::string);     
};

#endif