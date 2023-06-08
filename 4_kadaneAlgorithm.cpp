int maxSubArray(vector<int>& nums) {
        int currmax=0;
        int ans=INT_MIN;
        for(auto i:nums){
            currmax+=i;
            ans=max(currmax,ans);
            if(currmax<0){
                currmax=0;
            }
        }
        return ans;
        // we use maxi and sum variable to find subarray with highest value, the maxi 
        //keeps on updating while if we get sum<0 we will set sum back to 0 and 
        //discard previous interation's elements.
    }
