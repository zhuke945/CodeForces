#include<iostream>
using namespace std;
const int maxn = 100009;
int main()
{
	int n;
	int a[maxn], p[maxn];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> p[i];
	}
	int result = 0;
	result += a[0] * p[0];
	int price = p[0];
	for (int i = 1; i < n; i++)
	{
		if (p[i] < price)
		{
			price = p[i];
		}
		result += a[i] * price;
	}
	cout << result << endl;
}