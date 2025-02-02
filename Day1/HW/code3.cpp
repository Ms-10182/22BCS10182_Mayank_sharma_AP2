// Problem: Majority Element
// Name: Mayank Sharma
// UID: 22BCS10182
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int target = nums.size()/2;
        unordered_map<int,int>mp;
        for( int i: nums){
            mp[i]++;
            if(mp[i]>target){
                return i;
            }
        }
        return -1;
        
    }
};