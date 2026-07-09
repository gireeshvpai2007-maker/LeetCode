class Solution {
public:
     int sum(int n)
     {
        int sum=0;
        while(n>0)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
     }
    bool isHappy(int n) {
        if(n==1) return true;
        if(n==4) return false;
        return isHappy(sum(n));
    }
};