#include <bits/stdc++.h>
using namespace std;
void solve(){
  string s;
  cin>>s;
  int ans = 200000,n=s.size();
  for(char ch='a'; ch<='z'; ch++){
    int mx=0,id=0;
    while(id<n){
      int j=id;
      while(j<n && s[j]!=ch) j++;
      if(j-id)mx = max(mx, 1+(int)log2(j-id));
      id=j+1;
    }
    ans = min(ans,mx);
  }
  cout<<ans<<endl;
}
int main() {
  int t; cin>>t; while(t--){
    solve();
  }
}
