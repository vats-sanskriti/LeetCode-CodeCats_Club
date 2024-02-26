class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0 , j = 0;
        int k = 0;
        int n = nums.size();
            while(i<n &&j<n){
        if(nums[i]!= 0 )
            i++;
        
        if(nums[j] == 0)
            j++;
        
    if(i<n && j<n  && i<j){
        k = nums[i];
        nums[i] = nums[j];
        nums[j]= k;
       }
        j++;
            }
    }
};