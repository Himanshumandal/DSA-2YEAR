class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
            int cont=0;
        unordered_map<int,int>m;
    
        for(auto i:nums){
            m[i]++;
            if(m[i]>1){
                cont+=m[i]-1;
            }
        } 
        return cont;
    }
};
