class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0 ;
        int xor1 = 0 ;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i = 0 ; i<n1 ; i++){
            xor1 = xor1 ^ nums1[i]; 
        }
        
        for(int i = 0 ; i< n2 ;i++){
            if(n1%2==1){
                ans = ans^nums2[i]^xor1;
            }
            else
                ans = ans ^xor1;
        }
        return ans ;
    }
};
       
