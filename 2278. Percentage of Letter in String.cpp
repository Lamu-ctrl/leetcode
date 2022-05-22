class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int> map;
        int n=s.length();
        for(int i=0;i<n;i++){
            map[s[i]]++;
        }
        if(map.find( letter )!=map.end()){
            return map[letter]*100/n;
        }
        return 0;
    }
};
