class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n = nums.size();
        int count =0;
       
        for(int i =0; i<n; i++){
             long long sum =0;
            for(int j =i; j<n; j++){
                sum+=nums[j];
                
                long long digit = sum%10;
                long long temp = sum;
                  while(temp>=10){
                    temp= temp/10;
                }
                 long long dig = temp;
                if(dig==x && digit == x){
                    count++;
                }

            }
        }
        return count;
    }
};