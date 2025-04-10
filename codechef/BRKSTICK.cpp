#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,s=0;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            int tem;
            cin>>tem;
            s+=tem-1;
        }
        cout<<s<<endl;
    }
    
}