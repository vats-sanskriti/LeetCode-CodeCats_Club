class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int n = nums.size();
        vector<int> arr;
        int ans[2*n];
        int i = 0;
        for( i = 0 ; i<n ; i++){
            ans[i]=  ans[i+n] = nums[i]; 
        }
        for(i = 0 ; i<(2*n) ;i++){
           arr.push_back(ans[i]);

        }
       return arr;
    } 
};