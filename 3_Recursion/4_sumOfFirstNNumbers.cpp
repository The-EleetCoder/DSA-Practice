long long sumFirstN(long long n) {
   if (n==1){
       long long sum = 1;
       return sum;       
   }

   long long sum = sumFirstN(n-1);
   sum+=n;
   return sum;
}