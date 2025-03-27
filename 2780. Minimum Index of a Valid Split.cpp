class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        int maximumValue = 0,value = -1;
        map<int,int> mp;
        for(auto it : nums){
            mp[it]++;
            if(mp[it] > maximumValue){ 
                maximumValue = mp[it];
                value = it;
            }
        }
        int count = 0;
        for(int i = 0;i < n;i++){
            if(nums[i] == value) count++;
            if(count * 2 > i + 1 and (maximumValue - count) * 2 > n - i - 1){
                return i;
            }
        }
        return -1;
    }
};