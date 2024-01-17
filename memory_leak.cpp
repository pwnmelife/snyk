#include <windows.h>
#include <iostream>

int main() 
{
    int* pMemoryLeak = new int[10];
    for (int i = 0; i < 10; ++i) 
    {
        pMemoryLeak[i] = i * i;
    }
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << pMemoryLeak[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
