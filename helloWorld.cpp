#include <iostream>
using namespace std;

float convert();

float fahrenheit, celsius;

int main()
{
	std::cout << "Enter the temperature in degrees fahrenheit: ";
	std::cin >> fahrenheit;
	celsius = convert();
	std::cout << "The temperature in degrees Celsius is: " << celsius << std::endl;
	return 0;
}

float convert()
{
	celsius = ((fahrenheit - 32) * 5) / 9;
	return celsius;
}