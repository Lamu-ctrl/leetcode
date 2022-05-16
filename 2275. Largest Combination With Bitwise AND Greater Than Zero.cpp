class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int count[32]={0};
        for(auto it:candidates ){
            bitset<32> bs(it);
            string s=bs.to_string();
            for(int i=0;i<s.length();i++){
                count[i]+=s[i]-'0';
            }
        }
        return *max_element(count,count+32);
    }
};
