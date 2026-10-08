class Solution {
public:
    bool isPalindrome(string x){
        int l=0, r=x.length()-1;

        while(l<r){
            if(x[l]!=x[r]){
                return false;
            }
            r--;
            l++;
        }
        return true;
    }

    string base_conv(int n, int i){
        long long ans=0;
        long long rem, pow=1;

        while(n>0){
            rem=n%i;
            n=n/i;
            ans+=(rem*pow);
            pow*=10;
        }
        string a=to_string(ans);
        return a;
    }

    bool isStrictlyPalindromic(int n) {
        
        for(int i=2;i<=n-2;i++){
            string num=base_conv(n,i);
            if(isPalindrome(num)==false){
                return false;
            }
        }
        return true;
    }
};