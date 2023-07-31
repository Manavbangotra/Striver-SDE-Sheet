//coding ninjas
int NthRoot(int n, int m) {
   int ans=round(pow(m,(1.0/n)));
   if(pow(ans,n)==m){
       return ans;
   }
   else{
       return -1;
   }
}
