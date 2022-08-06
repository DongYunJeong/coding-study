// 평균값 구하기

#include <iostream>

int main()
{
	int t;
	std::cin >> t;
	int x;
	float sum=0;
	for (int i = 1; i <= t; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cin >> x;
			sum += x;
		}
		float result;
		result= sum/ 10+0.5;
		std::cout << "#" << i << " " << (int)result << std::endl;
		sum = 0;
	}
	return 0;
}