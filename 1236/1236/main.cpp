#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	int a, b, c;
	cin >> t;
	while (t--)
	{
		cin >> a >> b >> c;
		int maxn = 0;
		for (int i = 0; i <= a; i++)
		{
			for (int j = 1; i * 2 <= b && j <= b; j++)
			{
				int temp = i * 3;
				if (j * 2 <= c && j + i * 2 <= b)
				{
					temp += j * 3;
				}
				maxn = temp > maxn ? temp : maxn;
			}
		}
		cout << maxn << endl;
	}
	return 0;
}