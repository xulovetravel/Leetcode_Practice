class Solution {
public:
    void helper(vector<int>&A, vector<vector<int>> &res, vector<int>&sub, int count) {
        res.push_back(sub);
        for(int i=count; i<A.size();i++) {
            sub.push_back(A[i]);
            helper(A, res, sub, i+1);
            sub.pop_back();
            
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        vector<vector<int>>res;
        int count = 0;
        helper(nums, res, sub, count);
        return res;
    }
};