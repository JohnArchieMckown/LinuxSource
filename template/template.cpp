#include <assert.h>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Mine
{
public:
    Mine() { std::cout << "Mine() constructor\n"; }

    virtual ~Mine() { std::cout << "Mine() destructor\n"; }

    Mine &operator=(const Mine &lhs)
    {
        std::cout << "Mine() operator=\n";
        if (this == &lhs) {
            return *this;
        }
        this->m_mine = lhs.m_mine;
        return *this;
    }

    Mine(const Mine &rhs)
    {
        std::cout << "Mine() copy constructor\n";
        m_mine = rhs.m_mine;
    }

    Mine(const Mine &&rhs) = delete;
	    

    int m_mine;
};

int main(int argc, char *argv[], char *envp[])
{
    int index = 0;
    std::vector<std::string> arguments(argv, argv + argc);

    std::cout << "There are " << argc << " arguments\n";
    for (std::string argument : arguments) {
        std::cout << index++ << ":\t" + argument << '\n';
    }

    Mine x1; // = new Mine();
    x1.m_mine = 1234;
    Mine x2; // = new Mine();
    x2 = x1;
    x2.m_mine = 4321;
    Mine x3 = x2;

    std::cout << "x1:" << x1.m_mine << " " << &x1.m_mine << " " << &x1 << std::endl;
    std::cout << "x2:" << x2.m_mine << " " << &x2.m_mine << " " << &x2 << std::endl;
    std::cout << "x3:" << x3.m_mine << " " << &x3.m_mine << " " << &x3 << std::endl;
    /*
 * Code copied from cppreference.com
 *
 *   std::ranges::for_each(std::views::iota(1, 10), [](int i)
 *   {
 *       std::cout << i << ' ';
 *   });
 *   std::cout << '\n';
 *
 */

    return 0;
}
