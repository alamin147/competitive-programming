#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define fn(s, e, in) for (int i = s; i < e; i += in)
#define ss(a) sort(a.begin(), a.end())
#define prn(c) cout << c << "\n"
#define cc cout << "\n"
#define pab(a, b) cout << a << " " << b
#define pa(a) cout << a << " "
#define vc(v, n, l) vector<l> v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);

class Solution
{
public:
    int longestSubarray(vector<int> &arr, int k)
    {
        unordered_map<int, int> mp;
        int len = 0;
        int ss = 0;
        int i=0;
        while(i<arr.size())
        {
            ss += arr[i];

            if (ss == k)
                len = i + 1;

            else if (mp.find(ss - k) != mp.end())
                len = max(len, i - mp[ss - k]);

            if (mp.find(ss) == mp.end())
                mp[ss] = i;
        i++;
        }

        return len;
    }
};

bool validIndex(int i, int n)
{
    return i >= 0 && i < n;
}
bool isEven(int n)
{
    return n % 2 == 0;
}
