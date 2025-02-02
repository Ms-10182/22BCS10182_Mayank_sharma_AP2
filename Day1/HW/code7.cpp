// Problem: Find the Duplicate Number
// Name: Mayank Sharma
// UID: 22BCS10182
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto num:nums){
            if(mp[num]==1) return num;
            else mp[num]++;
        }
        return -1;
    }
};