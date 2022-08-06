// 1대1 가위바위보

#include <iostream>

int main()
{
	int a, b;
	std::cin >> a;
	std::cin >> b;

	if (a == 1)
	{
		if (b == 2)
			std::cout << "B" << std::endl;
		else
			std::cout << "A" << std::endl;
	}
	else if (a == 2)
	{
		if (b == 3)
			std::cout << "B" << std::endl;
		else
			std::cout << "A" << std::endl;
	}
	else
	{
		if (b == 1)
			std::cout << "B" << std::endl;
		else
			std::cout << "A" << std::endl;
	}
	return 0;
}