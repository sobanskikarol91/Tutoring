#pragma once
#include <iostream>
using namespace std;

class  ZlyNumerWejscia : public out_of_range
{
public:
	ZlyNumerWejscia() {}
	virtual char const* what() const override
	{
		return "Wprowadzony zly numer wejscia";
	}
};

