class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits.back()+=1;
        for(int i=digits.size()-1 ;i>=0;i--){
            if(digits[i]==10){
                digits[i]-=10;
                if(i!=0){
                    digits[i-1]++;
                }
                else{
                    vector<int> ndigits(1,1);
                    ndigits.insert(ndigits.end(),digits.begin(),digits.end());
                    return ndigits;
                }
            }
        }
        return digits;
    }
};
