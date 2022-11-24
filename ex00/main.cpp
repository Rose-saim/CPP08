#include <vector>
#include <iterator>
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> v1;
    v1.push_back(42);
    v1.push_back(2);
    v1.push_back(34);
    v1.push_back(72);
    
    std::vector<int>::iterator iter = easyfind(v1, 42);
    std::cout << *iter << std::endl;;

    try
    {
        iter = easyfind(v1, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
