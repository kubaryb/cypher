#pragma once
#include <iostream>
#include <string>
class cezar
{
private:
	std::string tekst;
	std::string klucz;
public:
	cezar() 
	{
		std::cout << "nowy cezar\n";
	}
	cezar(const std::string &tekst)
	{
		std::cout << tekst;
	}
	void enc()
	{
		std::cout << "dzialam\n";
	}
	~cezar() {}
};