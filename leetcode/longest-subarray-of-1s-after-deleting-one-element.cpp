class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=0,s=0,one=0;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                s++;
                one++;
            }
            else
            {
                if(s>0)
                {
                    v.push_back(s);
                    maxi=max(maxi,v.back());
                    s=0;
                    v.push_back(0);
                }
                else
                v.push_back(0);
            }
        }
        if(s>0)
        {
            v.push_back(s);
            maxi=max(maxi,v.back());
        }

        for(int i=1;i<v.size()-1;i++)
        {
            int s=0;
            if(v[i]==0)
            {
                s+=(v[i-1]+v[i+1]);
                maxi=max(maxi,s);
            }
        }

        for(auto i:v)
        cout<<i<<" ";
        if(one==nums.size())
        return maxi-1;
        return maxi;
    }
};
