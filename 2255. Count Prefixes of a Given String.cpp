class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int n=s.size();
        set<string> A;
        for(int i=0 ; i<=n ;i++){
            A.insert( s.substr(0,i));
        }
        int ret=0;
        for(auto t:words){
            ret+= A.count(t);
        }
        return ret;
    }
};
