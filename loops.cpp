#include <iostream>
using namespace std;

int loops(int x=0)
{
	int y = x + 1000;
	while (x <= y)
	{
		std::cout << x << std::endl;
		x = x + 100;
	}
	return 0;
}

int main()
{
	int x;
	std::cout << "Enter a starting number: ";
	std::cin >> x;
	std::cout << loops(x);
	return 0;
}