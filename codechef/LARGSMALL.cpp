#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        
        cin>>n;
        vector<int>v(n);
        int mini=10000;
        int maxi=-1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i]);
        }
        cout<<max(0,maxi-mini-1)<<endl;
    }
}