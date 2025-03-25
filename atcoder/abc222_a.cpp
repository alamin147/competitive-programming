#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;

    if(n==0)
    cout<<"0000"<<endl;
    else
    {
        int c=0;
        int t=n;
        while(t!=0)
        {
            t=t/10;
            c++;
        }
        
        for(int i=0;i<4-c;i++)
        {
            cout<<"0";
        }
        cout<<n<<endl;
    }
    
}