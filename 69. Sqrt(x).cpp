//bs
class Solution {
public:
    int mySqrt(int x) {
        int left=2;
        int right=x/2;
        int mid=left+(right-left)/2;
        long long temp;
        
        if(x<2){
            return x;
        }   
        while(right>=left){
            mid=left+(right-left)/2;
            temp=(long long)mid*mid;
            if(temp==x){
                return mid;
            }
            else if(temp>x){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        
        return right;
    }
};

/* brute force
class Solution {
public:
    int mySqrt(int x) {
        for(long long i=0;i<=x;i++){
            if(i*i==x){
                return i;
            }
            else if(i*i>x){
                return i-1;
            }
        }
        return -1;
    }
};
*/
