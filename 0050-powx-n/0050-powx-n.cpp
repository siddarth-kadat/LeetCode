#include<bits/stdc++.h>
class Solution {
public:
    
    long double helper(long double x, long long n) {
        if(n==0) return 1;
        
        long double half=helper(x, n/2);
        
        if (n%2==0){
            return half*half;
        } 
        else {
            if (n>0){
                return half*half*x;
            } else{
                return half*half*x;
            }
        }
    }

public:
    double myPow(double x, int n) {
        long long binForm=n;
        long double base=x;
        if (binForm<0){
            base = 1 / base;
            binForm=-binForm;
        }
        return helper(base, binForm);
    }

 /*   double myPow(double x, int n) {
        
        if(x==0) return 0;
        if(x==1) return 1;
        if(n==0) return 1;
        if(n==1) return x;
        if(x==-1 && (n%2)==0) return 1;
        if(x==-1 && (n%2)!=0) return -1;
        
        long binForm=n;
        double ans=1;
        if(n<0){
            x=1/x;
            binForm=-binForm;
        }

        while(binForm>0){
            if(binForm%2==1)
                ans*=x;
            x*=x;
            binForm/=2;
        }
        return ans;
    }*/
};