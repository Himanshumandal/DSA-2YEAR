class Solution {
public:
    int mySqrt(int x) {
       if(x<=1){
           return x;
       }
       int start=1,end=x,mid;
       while((end-start)>1){
           mid=start+(end-start)/2;
           if(mid==(x/mid)){
               return mid;
           }
           else if(mid>(x/mid)){
               end=mid;
           }
           else{
               start=mid;
           }
         
       }
         return start;
    }
};
