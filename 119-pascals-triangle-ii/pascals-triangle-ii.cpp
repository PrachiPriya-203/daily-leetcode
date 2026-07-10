class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> ans;
        long long val =1;
        ans.push_back(val);

        for(int i = 1; i<=n; i++){
            val = val*(n-i+1);
            val=val/i;

            ans.push_back(val);

        }
        return ans;
    }
};