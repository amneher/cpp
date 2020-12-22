#include <iostream>
using namespace std;

float convert(int celsius)
{
	return ((celsius * 9) / 5) + 32;
}

int main()
{
	int celsius;
	std::cout << "Enter a temperature in degrees Celsius: ";
	std::cin >> celsius;
	std::cout << convert(celsius) << std::endl;
	return 0;
}