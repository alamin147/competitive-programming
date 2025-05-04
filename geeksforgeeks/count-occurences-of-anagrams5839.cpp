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


class Solution{
    public:
        bool allZero(vector<int>& count)
        {
            return count==vector<int>(26, 0);
        }
    
        int search(string pat, string txt)
        {
            int k = pat.size();
            vector<int> count(26, 0);
            for(char &ch : pat) {
                count[ch-'a']++;
            }
            int i = 0, j = 0;
            int n = txt.size();
            int result = 0;
            while(j < n) {
                int idx = txt[j]-'a';
                count[idx]--;
                
                if(j - i + 1 == k) {
                    if(allZero(count)) {
                        result++;
                    }
                    
                    count[txt[i]-'a']++;
                    i++;
                }
                j++;
            }
            return result;
        }
    };


bool validIndex(int i,int n){
    return i>=0 && i<n;
}
bool isEven(int n){
    return n%2==0;
}