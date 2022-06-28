class Solution {
public:
    int minDeletions(string s) {
        int res=0;
        vector<int> vec(26,0);
        for(auto t:s){
            vec[t - 'a']+=1;
        }
        
        sort(vec.begin(),vec.end(),[](int a,int b){
            return a>b;
        });
        

        int last=vec[0];
        for(int i=1 ; i<26 ;i++){
            while(vec[i]>=last && vec[i]>0){
                vec[i]--;
                res++;
            }
            last=vec[i];
        }
        return res;
    }
};
