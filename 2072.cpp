// 홀수만 더하기

#include <iostream>

int main()
{
	int sum = 0;
	int a;
	std::cin >> a;
	for(int j=1;j<=a;j++)
	{
		for (int i = 0; i < 10; i++)
		{
			int x;
			std::cin >> x;
			if (x % 2 != 0)
			{
				sum += x;
			}
		}
		std::cout <<"#"<<j<<" "<< sum << std::endl;
		sum = 0;
	}
	return 0;
}