#include <iostream>

using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int n;
		cin >> n;
		int* arr = new int[n] ;
		long long result = 0;
		for (int j = 0; j < n; j++)
		{
			int a;
			cin >> a;
			arr[j] = a;
		}
		int max = arr[n-1];
		for (int j = n - 1; j >= 0; j--)
		{
			if (arr[j] <= max)
			{
				result += max - arr[j];
			}
			else if (arr[j] > max)
			{
				max = arr[j];
			}
		}
		cout << "#" << i << " " << result << endl;
		delete arr;
	}
	return 0;
}