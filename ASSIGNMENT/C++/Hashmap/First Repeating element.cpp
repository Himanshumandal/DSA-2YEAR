
int Solution::solve(vector<int> &A) {
 unordered_set<int>m;
  int n=-1;
  for(int i=A.size()-1;i>=0;i--){
      if(m.find(A[i])!=m.end()){
          n= A[i];
      }
      m.insert(A[i]);
  }
  return n;
}
    
