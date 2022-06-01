class Logger {
    /*
1. 简单的思路，如何想到这个解法的: 字串本身以及時間戳記都很重要，因此用MAP處理。
2. 该解法的时空复杂度:time :O(n), space:根據他有多少不同的messages，根據題目條件至多10^4。
3. 从阅读题目到 AC 的所需时间:8 min
    */
public:
    map <string ,int> map ; // string , trigger time;
    Logger() {
        
    }
    
    bool shouldPrintMessage(int timestamp, string message) {
        if(map.find(message)==map.end() ) {
            // not exist
            map[message]=timestamp+10;
            return true;
        }
        else{
            if(map[message]<=timestamp){
                map[message]=timestamp+10;
                return true;
            }
            else{
                return false;
            }
        }
        
    }
};
