#include<bits/stdc++.h>
using namespace std;
void app()
{
	int n;
	cin >> n;
	vector<int>p(10, 0);
	vector<int>arr;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		p[a % 10]++;
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < min(p[i], 3); j++)
		{
			arr.push_back(i);
		}
	}
	n = arr.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			for (int k = j+1; k < n; k++)
			{
				if (((arr[i] + arr[j] + arr[k]) % 10) == 3)
				{
					cout << "YES" << endl;
					return;
				}
			}
		}
	}
	cout << "NO" << endl;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		app();
	}
	return 0;
}
