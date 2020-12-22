#include <iostream>

auto average(int x, int y);
auto average(float x, float y);
auto average(long x, long y);

auto average(int x, int y)
{
	return (x + y) / 2;
}

auto average(float x, float y)
{
	return (x + y) / 2.0;
}

auto average(long x, long y)
{
	return (x + y) / 2;
}

int main()
{
	int x = 77;
	int y = 53;
	long z = 9875250987526098;
	long a = 9439589843384507;
	float b = 75.234;
	float c = 34.776;
	std::cout << average(x, y) << std::endl;
	std::cout << average(z, a) << std::endl;
	std::cout << average(b, c) << std::endl;
	// How can I get the numbers to be auto-typed too?
	/*
	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "Enter a number: ";
	std::cin >> y;
	std::cout << average(x,y) << std::endl;
	*/ 
	return 0;
}