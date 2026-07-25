class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int low=0;
        int high=nums.size()-1;
        int mid,x=-1,y=-1;
        while(low<=high)
        {  mid=low+(high-low)/2;
            if(target==nums[mid])
            {
                x=mid;
                high=mid-1;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else 
              low=mid+1;
        }
        low=0;high=nums.size()-1;
        while(low<=high)
        {  mid=low+(high-low)/2;
            if(target==nums[mid])
            {
                y=mid;
                low=mid+1;
            }
            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else 
              low=mid+1;
        }
        ans.push_back(x);
        ans.push_back(y);
        return ans;
    }
};