// exception::what
#include <iostream>       // std::cout
#include <exception>      // std::exception

struct ooops : std::exception {
	const char* what() const noexcept { return "Ooops!\n"; }
};

int main2() 
{
	try
	{
		throw ooops();
	}
	catch (std::exception& ex) {
		std::cout << ex.what();
	}

	getchar();
	getchar();
	return 0;
}