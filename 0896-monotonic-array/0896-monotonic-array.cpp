
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        if (n <= 2)
            return true;

        if (nums[1] > nums[0]) {
            for (int i = 2; i < n; i++) {
                if (nums[i] < nums[i - 1])
                    return false;
            }
        }
        else if (nums[1] < nums[0]) {
            for (int i = 2; i < n; i++) {
                if (nums[i] > nums[i - 1])
                    return false;
            }
        }
        else {
            int i = 1;

            while (i < n && nums[i] == nums[i - 1])
                i++;

            if (i == n)
                return true;

            if (nums[i] > nums[i - 1]) {
                for (; i < n; i++) {
                    if (nums[i] < nums[i - 1])
                        return false;
                }
            } else {
                for (; i < n; i++) {
                    if (nums[i] > nums[i - 1])
                        return false;
                }
            }
        }

        return true;
    }
};
