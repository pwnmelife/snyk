#include <cstring>
#include <iostream>

void vulnerableFunction(const char* input) 
{
    char* buffer = new char[10];
    strcpy(buffer, input);
    std::cout << "Buffer content: " << buffer << std::endl;
    delete[] buffer;
}

int main() 
{
    const char* inputData = "This input data is way too long and will overflow the buffer.";
    vulnerableFunction(inputData);
    return 0;
}
