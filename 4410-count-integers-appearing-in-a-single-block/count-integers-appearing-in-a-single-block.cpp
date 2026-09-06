class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int , int> freq;
        unordered_map<int,int> first;
        unordered_map<int,int> last;
        for(int i =0; i<n; i++){
            int x = nums[i];
            freq[x]++;
            if(first.find(x) == first.end()){
                first[x]=i;
            }
            last[x]=i;


        }
        int count =0;
        for(auto it : freq){
            int x = it.first;
            if(last[x]-first[x]+1 == freq[x]){
                count++;

            }
            
        }

        return count;
    }
};