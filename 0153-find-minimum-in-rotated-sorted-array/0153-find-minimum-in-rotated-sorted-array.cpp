class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        int flag=-1;
        while(l<r)
        {
            if(nums[l]>nums[l+1])
            {  
                flag=0;
                break;
            }
            else
              l++;
            if(nums[r]<nums[r-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(nums[0]<nums[l+1])
               return nums[0];
            else
                return nums[l+1];
        }
        else if(flag==1)
        {
            if(nums[0]<nums[r])
              return nums[0];
            else
              return nums[r];
        }
        return nums[0];
    }
};