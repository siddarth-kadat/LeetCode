class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=0, a=x;
        while(a!=0){
            int d=a%10;
            sum+=d;
            a/=10;
        }
        if(x%sum==0){
            return sum;
        }
        return -1;
    }
};