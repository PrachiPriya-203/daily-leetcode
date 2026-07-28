class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int j=0;
        int n = nums.size();
        int square = 1;
        for(int i =0; i<n; i++){
            square = nums[i]*nums[i];
            nums[j] = square;
            j++;

        }
        sort(nums.begin(),nums.end());
        return nums;
    }
    
};