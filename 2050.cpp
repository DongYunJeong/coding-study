// 알파벳 숫자

#include <iostream>
//#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		cout << s[i] - 64 << ' ';
	}
	return 0;
}