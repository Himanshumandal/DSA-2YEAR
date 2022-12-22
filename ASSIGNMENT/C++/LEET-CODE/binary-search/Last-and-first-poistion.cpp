class Solution {

public:
int getstartindex(vector<int>& nums,int target){
    int start=0,end=nums.size()-1,mid,res=-1;
    while(start<=end){
       mid=start+(end-start)/2;
       if(nums[mid]>target){
           end=mid-1;
       }
       else if(nums[mid]==target){
           res= mid;
        end=mid-1;
       }
       else{
            start=mid+1;
       }
       
    }
    return res;
}
int getlastindex(vector<int>& nums,int target){
    int start=0,end=nums.size()-1,mid,res=-1 ;
    while(start<=end){
        mid=start+(end-start)/2;
       if(nums[mid]>target){
           end=mid-1;
       }
       else if(nums[mid]==target){
          res=mid;
           start=mid+1;
       }
       else{
start=mid+1;
       }
       
    }
    return res;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=getstartindex(nums,target);
        int b=getlastindex(nums,target);
            return{a,b};
             }
};
