class Solution {
public:
    int reverse(int x) {
        long long int result = 0;
         if (x > 2147483647 || x < -2147483648)
         {
        return 0;
         }
        while(x!=0) {
            result=result*10+x%10;
            x=x/10;
        }
        if(result > 2147483647 || result <-2147483648) {
            return 0;
        }
        return result;
    }
};