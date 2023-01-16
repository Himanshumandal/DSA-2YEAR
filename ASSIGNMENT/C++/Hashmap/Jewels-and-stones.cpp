class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int>m1;
       // unordered_map<string,int>m2; 
       int count=0; 
        for(int i=0;i<jewels.size();i++){
            m1[jewels[i]]++;
        }
        for(auto i=0;i<stones.size();i++){
            count+=m1[stones[i]];
        }
        return count;
    }
};
