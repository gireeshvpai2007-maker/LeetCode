class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>m;
        int first,sec;
        for(int i=0;i<nums.size();i++)
        {
            first=nums[i];
            sec=target-first;
            if(m.find(sec)!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;
    }
};