class Solution {
public:
    int minimumSum(int num) {
        vector<int> ans(4,0);
        
        for(int i = 0 ;i<4 ; i++){
            ans[i] = num%10;
            num= num/10;
        }
        sort(ans.begin() , ans.end());
        int result = (ans[0]*10 + ans[3]) +(ans[1]*10 + ans[2]);
            return result;
    }
};