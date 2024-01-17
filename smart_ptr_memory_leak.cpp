#include <iostream>
#include <memory>

class B;

class A 
{
public:
    std::shared_ptr<B> b_ptr;
    ~A() 
    {
        std::cout << "A 被销毁" << std::endl;
    }
};

class B 
{
public:
    std::shared_ptr<A> a_ptr;
    ~B() {
        std::cout << "B 被销毁" << std::endl;
    }
};

int main() 
{
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();
    a->b_ptr = b; // 'a' 持有 'b' 的引用
    b->a_ptr = a; // 'b' 持有 'a' 的引用
    return 0; // 程序退出时，A和B对象不会被销毁，内存泄漏发生
}
