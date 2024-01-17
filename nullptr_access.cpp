#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> uniquePtr = std::make_unique<int>(); // 默认初始化，指针为空
	*uniquePtr = 4;
	uniquePtr.reset();
	std::cout << *uniquePtr << std::endl;

	return 0;
}
