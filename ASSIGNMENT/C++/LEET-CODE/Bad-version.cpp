class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,end=n,bad=-1;
        while(start<=end){
          int  mid=start+(end-start)/2;
            if(isBadVersion(mid)==true){
                bad=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        
        return bad;
    }
};
