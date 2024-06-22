
// my solution

class MySolution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> a;

        for (int i = 0; i < nums.size(); i++)
        {
            for (int k = 0; k < nums.size(); k++)
            {

                if (i != k && nums[i] + nums[k] == target)
                {
                    a.push_back(i);
                    a.push_back(k);
                    return a;
                }
            }
        }
        return a;
    }
};

// other solution
class OtherSolution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> a;

        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = target - nums[i];
            if (mp.find(sum) != mp.end())
            {
                a.push_back(mp[sum]);
                a.push_back(i);
                return a;
            }

            //  2:0   5:1
            mp[nums[i]] = i;
        }
        return a;
    }
};
