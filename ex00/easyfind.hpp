#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class EasyfindException : public std::exception
{
    public:
        EasyfindException(std::string m) : message(m) {};
        const char* what() const throw() { return message.c_str(); };
        ~EasyfindException(void) throw() {};
    private:
        std::string message;

};

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), value);
    if (iter == container.end())
        throw EasyfindException("Value that does not exist in this container!");
    return iter;
}



#endif
