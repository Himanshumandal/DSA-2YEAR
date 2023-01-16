class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int diff;
        for(int i=0;i<nums.size();i++){
            diff=nums[i];
            int t=target-diff;
            if(m.find(t)!=m.end()){
                return {i,m[t]};
            }
            m[nums[i]]=i;
        }
        return{-1,-1};
    }
};
