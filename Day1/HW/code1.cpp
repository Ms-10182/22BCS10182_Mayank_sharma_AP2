// Problem: Contains duplicate
// Name: Mayank Sharma
// UID: 22BCS10182
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> uniqueEle;
        for(auto i:nums){
            uniqueEle.insert(i);
        }

        return !(uniqueEle.size()==nums.size());
    }
};