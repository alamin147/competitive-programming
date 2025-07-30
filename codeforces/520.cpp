#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n, m, cnt=0;
    cin>> n >> m;
    while(n!=m) {
        if(m<n) m++;
        else if(m%2==0) m/=2;
        else m++;
        cnt++;
    }
    cout << cnt;
} 
