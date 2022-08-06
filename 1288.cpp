#include <iostream>

using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int N;
		cin >> N;
		int arr[10] = { 0 };
		int a = 1;
		while (1)
		{
			int cnt = 0;
			int m = N * a;
			while (m>=1)
			{
				arr[m % 10] = 1;
				m /= 10;
			}
			for (int j = 0; j < 10; j++)
			{
				if (arr[j] == 1)
					cnt++;
			}
			if (cnt >= 10)
				break;
			a++;
		}
		cout << "#" << i << " " << a*N<<endl;
	}
	return 0;
}