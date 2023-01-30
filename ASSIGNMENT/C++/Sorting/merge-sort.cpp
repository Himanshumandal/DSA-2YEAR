class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
      //  nums1.erase(nums1.begin()+m,nums1.end());
       for(int i=0;i<nums2.size();i++){
           nums1[m+i]=nums2[i];
       }
       int temp=0;
       for(int i=0;i<nums1.size();i++){
           for(int j=0;j<nums1.size();j++){
               if(nums1[i]<=nums1[j]){
                   temp=nums1[i];
                   nums1[i]=nums1[j];
                   nums1[j]=temp;
               }
           }
       }
       cout<<nums1[0];
    }
    
};
