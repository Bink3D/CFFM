#include "Includes.h"

#include "Memory.h"
Memory* mem;

#include "Bytes.h"

int main()
{
    printf("Loading Files...\n");

    //Run File Command Here:
    auto PathForDownload = "C:/download_test.txt";
    if (!mem->CreateFileFromMemory(PathForDownload, reinterpret_cast<const char*>(txtData), sizeof(txtData)))
    {
        printf("Failed to Install File.\n");
        return -1;
    }

    printf("File Installed!");

    /*
    To Run or Remove file simply:
    1) system("FilePath");
    2) remove("FilePath);
    */

    while(true){}
    return -1;
}
