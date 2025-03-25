#include<bits/stdc++.h>
using namespace std;

void alamin()
{
    int n;
    cin>>n;
    long long sum=0;
    vector<long long> v(n);
    vector<long long> odd;
    long long es=0,os=0,e=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
        {
            // 2
            es+=v[i];
            e++;
        }
        else
        {
            // 1 3
            odd.push_back(v[i]);
            os+=v[i];
            o++;
        }
    }

    if(o%2==0)
    {
        cout<<es+os<<endl;
    }
    else
    {
        sort(odd.begin(),odd.end());
        cout<<es+os-odd[0]<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   
        alamin();
}
