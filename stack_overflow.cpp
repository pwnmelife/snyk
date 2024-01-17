#include <iostream>

void RecursiveFunction(int counter) 
{
    char largeArray[1024*1024];
    std::cout << "Counter value: " << counter << std::endl;
    RecursiveFunction(counter + 1);
}

int main() 
{
    RecursiveFunction(0);
    return 0;
}
