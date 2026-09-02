class Solution {
public:
    int mirrorDistance(int n) {
        int a=0;
        int x=n;
        while(n!=0){
            int d=n%10;
            a=a*10+d;
            n=n/10;
        }
        a=x-a;
        return abs(a);
    }
};