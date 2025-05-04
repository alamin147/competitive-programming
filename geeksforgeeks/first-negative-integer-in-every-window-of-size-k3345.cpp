#include<bits/stdc++.h>
using namespace std;




#define ll long long
#define py cout<<"YES"<<endl
#define pn cout<<"NO"<<endl
#define fn(s,e,in) for(int i=s;i<e;i+=in)
#define s(a) sort(a.begin(),a.end())
#define prn(c) cout << c <<"\n"
#define cc cout <<"\n"
#define pab(a,b) cout << a <<" "<<b
#define pa(a) cout << a <<" "
#define vc(v,n,l) vector<l>v(n)
#define elif else if
bool validIndex(int i, int n);
bool isEven(int n);


class Solution {
    public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int i=0,j=0;
        int as=arr.size();
        
        vector<int>v;
        queue<int>q;
        
        while(j<as)
        {
            if(arr[j]<0)
            q.push(arr[j]);
            
            if(j-i+1==k)
            {
                if(!q.empty())
                {
                    v.push_back(q.front());
                    if(arr[i]==q.front())
                    {
                        q.pop();
                    }
                }
                else
                v.push_back(0);
                i++;j++;

            }
            else
            j++;
        }
        return v;
    }   

};


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}