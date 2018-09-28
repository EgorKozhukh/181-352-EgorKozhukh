#include <iostream>
#include <stdlib.h>

template <typename T>
std::size_t f(T x)
{
	return sizeof(x);
}

int main()
{
	int ix = 0;
	int pix=0;
	double dx=0, *pdx=0, **ppdx=0;
	float fx=0, *pfx=0;
	char cx=0, *pcx=0, **ppcx=0;
	long lx=0, *plx=0;
	long double ldx=0, *pldx=0;
	long long int llix=0, *pllix=0;

	std::cout << "Size of int: " << f(ix) << " min: -2 147 483 648" <<" max: 2 147 483 647" << std::endl;
	std::cout << "Size of double: " << f(dx) << "1,7E +/- 308 (15 sign)" << std::endl;
	std::cout << "Size of float: " << f(fx) << " min:" << "max: " << std::endl;
	std::cout << "Size of char: " << f(cx) << " min: -128" << "  max: 127" << std::endl;
	std::cout << "Size of long: " << f(lx) << " min: -2 147 483 648" << " max: 2 147 483 647" << std::endl;
	std::cout << "Size of short: " << f(lx) << " min: -32768" << " max: 32767" << std::endl;

	system("pause");
	return 0;
}