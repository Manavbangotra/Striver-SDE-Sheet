void nextPermutation(vector<int>& nums)
    {
        int n = nums.size();
        int k, l;

        // Step-1 : find index k before peak point from end;
        for (k = n - 2; k >= 0; k--) {
            if (nums[k] < nums[k + 1]) {
                break;
            }
        }

        if (k < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            // step-2: find index l (l>k) from end which have greater element than at index k;
            for (l = n - 1; l > k; l--) {
                if (nums[k] < nums[l]) {
                    break;
                }
            }

            // Step-3: swap kth and lth element
            swap(nums[k], nums[l]);

            // Step-4: reverse vector from k+1 to end
            reverse(nums.begin() + k + 1, nums.end());
        }
    }
