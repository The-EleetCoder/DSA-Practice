void print(vector<int> &ans,int n){
    if(n==0) return;
    
    ans.push_back(n);
    print(ans,n-1);
}

vector<int> printNos(int x) {
   vector<int> ans;
   print(ans,x);
   return ans;
}