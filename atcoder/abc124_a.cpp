#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int op1= a+a-1;
    int op2= b+b-1;
    int op3=a+b;
    cout<<max(max(op1,op2),op3)<<endl;
}
