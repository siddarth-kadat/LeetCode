class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry=0;
        int j=num2.length()-1;
        int i=num1.length()-1;
        string s="";
        while(i>=0 || j>=0 || carry>0){
            int sum=carry;
            if(i>=0){
                sum+=num1[i--]-'0';
            }
            if(j>=0){
                sum+=num2[j--]-'0';
            }

            carry=sum/10;

            s+=to_string(sum%10);
        }
        reverse(s.begin(), s.end());
        return s;

    }
};