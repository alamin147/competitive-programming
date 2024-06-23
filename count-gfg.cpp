//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {
        int original = N;
        int c = 0;
        while (N != 0)
        {
            int lastDigit = N % 10;
            if (lastDigit == 0)
            {
                int lastDigit = N % 10;
                N = N / 10;
                continue;
            }
            else if (original % lastDigit == 0)
                c++;
            N = N / 10;
        }
        return c;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0;
}
// } Driver Code Ends