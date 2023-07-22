//leetcode
class Solution{
    	void backtrackDfs(vector<int> &nums, int start, vector<vector<int>> &res){
		int n = nums.size();
		if (start >= n){
			res.push_back(nums);
			return;
		}

		for (int i = start; i < n; i++){
			swap(nums[start], nums[i]); // DO
			backtrackDfs(nums, start + 1, res); // RECUR
			swap(nums[start], nums[i]); // UNDO
		}
	}
public:
	vector<vector<int>> permute(vector<int> &nums){
		vector<vector<int>> res;
		backtrackDfs(nums, 0, res);
		return res;
	}
};
