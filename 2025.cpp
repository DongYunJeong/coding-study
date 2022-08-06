//n¡Ÿ µ°º¿

#include <iostream>

int main()
{
	int x;
	std::cin >> x;
	int sum = 0;
	for (int i = 1; i <= x; i++)
	{
		sum += i;
	}
	std::cout << sum << std::endl;
	return 0;
}