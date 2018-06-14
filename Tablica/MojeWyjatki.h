#pragma once
#include <exception>
using namespace std;

class NiewlasciwaAlokacja : public exception
{
public:
	char const* what() const override
	{
		return "Bledny rozmiar tablicy";
	}
};

class PozaZasiegiem : public exception
{
public:
	char const* what() const override
	{
		return "Poza zasiegiem";
	}
};


