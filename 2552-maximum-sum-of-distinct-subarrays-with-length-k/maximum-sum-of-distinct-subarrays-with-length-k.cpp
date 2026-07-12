class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
      

        int n = nums.size();

        unordered_map<int, int> mp;

        long long windowsum = 0;
        long long maxsum = 0;

        // First Window
        for (int i = 0; i < k; i++) {
            windowsum += nums[i];
            mp[nums[i]]++;
        }

        if (mp.size() == k)
            maxsum = windowsum;

        for (int j = k; j < n; j++) {

          
            windowsum -= nums[j - k];
            mp[nums[j - k]]--;
            if (mp[nums[j - k]] == 0)
                mp.erase(nums[j - k]);

        
            windowsum += nums[j];
            mp[nums[j]]++;

            
            if (mp.size() == k) {
                maxsum = max(maxsum, windowsum);
            }
        }

        return maxsum;
    

    }
};