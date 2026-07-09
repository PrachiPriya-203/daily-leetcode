class Solution {
public:
    vector<vector<int>> generate(int numRows) {


        vector<vector<int>> ans;

        for(int row = 1; row <= numRows; row++)
        {
            long long val = 1;
            vector<int> temp;

            temp.push_back(1);   // First element is always 1

            for(int col = 1; col < row; col++)
            {
                val = val * (row - col);
                val = val / col;

                temp.push_back(val);
            }

            ans.push_back(temp);   // Store current row
        }

        return ans;
    
  
    }
};