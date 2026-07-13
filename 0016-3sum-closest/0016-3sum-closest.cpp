class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i=0,left,right,sum=nums[0]+nums[1]+nums[2],closest=sum;
        for( i=0;i<nums.size()-2;i++)
        {
            
             left=i+1;
             right=nums.size()-1;
             
            while(left<right)
            {
                sum=nums[i]+nums[left]+nums[right];
                if(abs(sum-target) < abs(closest-target))
                {
                    closest=sum;
                }
                
                if(sum<target)
                {
                    left++;
                }
                else if(sum>target)
                {
                    right--;
                }
                else
                {
                    return sum;
                }
            }
            
            
        }
        return closest;
    }
};