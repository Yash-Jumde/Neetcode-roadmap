//Concept: Hashing

//1. Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        unordered_map<int, int> m;
        
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target - nums[i]) != m.end())
            {
                output.push_back(i);
                output.push_back(m[target - nums[i]]);
                break;
            }
            m[nums[i]] = i;
        }

        return output;
    }
};
