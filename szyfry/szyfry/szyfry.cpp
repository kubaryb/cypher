// szyfry.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "cezar.h"
#include <string>

int main()
{
	std::string tekst("dajmy na to taki");
	cezar szyfr1(tekst);
	szyfr1.enc();
    return 0;
}

