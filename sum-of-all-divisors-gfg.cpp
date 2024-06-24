#include <bits/stdc++.h>
using namespace std;

// brute force
long long int divisor(int l)
{
    long long int digitSum = 0;
    for (int i = 1; i <= sqrt(l); i++)
    {
        if (l % i == 0)
        {
            digitSum += i;
            if (l / i != i)
                digitSum += (l / i);
        }
    }
    return digitSum;
}

int sums(int n)
{

    long long sum = 0;

    vector<long long int> v(n + 1, 0);
    v[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        v[i] = v[i - 1] + divisor(i);
    }

    return v[n];
}

// fast method
long long int sumsFastest(int n)
{

    long long int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (n / i) * i;
    }

    return sum;
}

int main()
{

    int n;
    cin >> n;

    cout << sums(n) << "\n";
    cout << sumsFastest(n) << "\n";
}