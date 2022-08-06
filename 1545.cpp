// 거꾸로 출력

#include <iostream>

int main()
{
	int x;
	std::cin >> x;
	for (int i = x; i >= 0; i--)
	{
		std::cout << i << ' ';
	}
	return 0;
}