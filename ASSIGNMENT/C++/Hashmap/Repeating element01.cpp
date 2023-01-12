
int Solution::solve(vector<int> &A) {
 unordered_map<int,int>m;
  int n=-1;
  for(int i=0;i<A.size();i++){
      m[A[i]]++;
  }
  for(int i=0;i<A.size();i++){
      if(m[A[i]]>1){
          return A[i];
      }
  }
  return -1;
}
    
