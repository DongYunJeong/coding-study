//중간값 찾기

#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	float x;
	float a[200];
	for (int i = 0; i < n; i++)
	{
		std::cin >> x;
		for (int j = i; j >= 0; j--)
		{
			if (i == 0)
			{
				a[i] = x;
				continue;
			}
			if (a[j - 1] < x)
			{
				a[j] = x;
				break;

			}
			a[j] = a[j - 1];
			a[j - 1] = x;
		}
	}
	std::cout << a[n / 2 ] << std::endl;
	return 0;
}