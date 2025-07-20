class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=-1;
        vector<bool>v(candies.size(),false);
        for(auto i:candies)
        {
            maxi=max(maxi,i);
        }
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=maxi)
            v[i]=true;
        }
        return v;
    }
};
