bool palindrome(int n)
{
   int s=0;
   string ans = to_string(n);
   int e=ans.length()-1;
   while(s<e){
       if(ans[s]!=ans[e]){
           return false;
       }
       s++;
       e--;
   }
   return true;
}