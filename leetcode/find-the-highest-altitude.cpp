class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0,s=0;
        for(int i=0;i<gain.size();i++)
        {
            s+=(gain[i]);
            maxi=max(maxi,s);
        }
        return maxi;
    }
};
