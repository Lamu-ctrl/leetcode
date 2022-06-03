class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> map;
        for(auto t:s){
            map[t]++;
        }
        bool single=0;
        int res=0;
        for(auto t:map){
            if(t.second % 2 ==0){
                res+=t.second;
            }
            else{
                single=1;
                res+=(( t.second/2 )*2 );
            }
        }
        return res+single;
    }
};
