#include <iostream>

void unsafeFunction(char* input)
{
	char buffer[10];
	strncpy(buffer, input, 0xff);
}

int main() 
{
	char longInput[256];
	memset(longInput, 'A', 255);
	longInput[255] = '\0';
	unsafeFunction(longInput);
	return 0;
}
