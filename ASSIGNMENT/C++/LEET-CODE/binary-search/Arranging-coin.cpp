class Solution {
public:
    int arrangeCoins(int n) {
       long int low=1,high=n,mid;
        while(low<=high){
            mid=low+(high-low)/2;
          long int curr=mid*(mid+1)/2;
            if(curr==n)
            return mid++;
            else if(curr>n)
            high=mid-1;
            else
            low=mid+1;
        }
        return high;
    }
};
