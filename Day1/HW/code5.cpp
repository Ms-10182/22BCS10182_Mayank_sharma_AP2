// Problem: 3Sum
// Name: Mayank Sharma
// UID: 22BCS10182
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    int n = nums.size();

    for (int k = 0; k < n - 2; k++) {
        // Skip duplicates for the first element
        if (k > 0 && nums[k] == nums[k - 1]) {
            continue;
        }

        int target = -nums[k];
        int s = k + 1;
        int e = n - 1;

        while (s < e) {
            int sum = nums[s] + nums[e];
            if (sum == target) {
                ans.push_back({nums[k], nums[s], nums[e]});

                // Skip duplicates for the second and third elements
                while (s < e && nums[s] == nums[s + 1]) s++;
                while (s < e && nums[e] == nums[e - 1]) e--;

                s++;
                e--;
            } else if (sum < target) {
                s++;
            } else {
                e--;
            }
        }
    }
    return ans;
}
};