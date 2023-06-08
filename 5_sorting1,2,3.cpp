void sortColors(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int n=nums.size();

        bubble sort
    
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i-1;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }

        insertion sort

        for(int i=0;i<=n-1;i++){
            int j=i;
            while(j>0 and nums[j-1]>nums[j]){
                swap(nums[j],nums[j-1]);
                j--;
            }
        } 
    }
