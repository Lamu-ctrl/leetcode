class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        int n=people.size();    
        vector<vector<int>> res;        
        sort(people.begin(),people.end(),[](vector<int> &p1,vector<int>&p2){
            return p1[0]>p2[0]||(p1[0]==p2[0] && p1[1]<=p2[1]);
        });
        for(int i=0; i<n;i++){
            res.insert(res.begin()+people[i][1] , people[i]);            
        }
        return res;        
    }
};

        /*
        for(auto t:people){
            for(auto tt:t){
                cout<<tt<<"  ";
            }
            cout<<endl;
        }
        */
