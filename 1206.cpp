#include <iostream>
#include<algorithm>
using namespace std;


int compare(int *list,int j)
{
	int x = max(list[j - 2], list[j - 1]);
	int y = max(list[j + 1], list[j + 2]);
	return max(x, y);
}

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		int size;
		cin >> size;
		int* list = new int[size];
		int result = 0;
		for (int j = 0; j < size; j++)
		{
			cin >> list[j];
		}
		for (int j = 2; j < size-2; j++)
		{
			int x = compare(list, j);
			if (list[j] > x)
			{
				result += list[j] - x;
			}
		}
		cout << "#" << i << " " << result << endl;
		delete list;
	}
	return 0;
}
