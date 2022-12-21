class Solution {
public:
    int guessNumber(int n) {
        int start = 1, end = n,mid;
       while(start<=end){

           mid=start+(end-start)/2;

           if(guess(mid)==0){
               return mid;
           }
           else if(guess(mid)==1){
               start=mid+1;
           }
           else{
              end= mid-1;
           }
       }
       return -1;
    }
};
