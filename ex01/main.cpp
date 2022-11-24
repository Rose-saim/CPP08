
#include "Span.hpp"

int randomf()
{
	return (int)(rand());
}

int main()
{
    srand(time(NULL));

    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    try
    {
	    sp.addNumber(8);
    }
    catch (std::exception &e)
    {
	    std::cerr << e.what() << std::endl;
    }

    Span sp2(50000);
	sp2.addNumber(3);
	std::vector<int> v(40000);
	std::generate(v.begin(), v.end(), randomf);
	sp2.addRange(v.begin(), v.end());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

    return 0;
}
