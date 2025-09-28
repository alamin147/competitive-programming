class Solution {
public:
  vector<int> decimalRepresentation(int n) {
    long long dec = 1;
    vector<int> v;
    while (n != 0) {
      long long last = n % 10;
      last = last * dec;
      dec *= 10;
      if (last != 0)
        v.push_back((int)last);
      n /= 10;
    }
    // for(auto i:v)
    //   cout<<i<<" ";
    reverse(v.begin(), v.end());
    return v;
  }
};
