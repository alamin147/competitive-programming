#include<bits/stdc++.h>
using namespace std;

class RandomizedSet {
public:
    unordered_map<int,int>s;
    vector<int>v;
    RandomizedSet() {
    }
    bool search(int val)
    {
        if(s.find(val)!=s.end())
            return true;
        return false;
    }
    bool insert(int val) {

        if(search(val))
            return false;
        v.push_back(val);
        s[val]=v.size()-1;
        return true;
    }

    bool remove(int val) {
        if(!search(val))
            return false;
        auto it = s.find(val);
        v[it->second] = v.back();
        v.pop_back();
        s[v[it->second]] = it->second;
        s.erase(val);
        return true;
    }

    int getRandom() {
        return v[rand()%v.size()];
    }
};
