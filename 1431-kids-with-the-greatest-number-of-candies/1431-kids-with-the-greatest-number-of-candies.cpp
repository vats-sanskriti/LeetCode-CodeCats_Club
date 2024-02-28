class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0 ;
        int n = candies.size();
        vector<bool> array;
      for(int  i = 0 ; i<n ;i++){
         maxi = max(maxi,candies[i]);
            }
        
    for(int i = 0 ; i<n ; i++){
            if((candies[i] + extraCandies) >=  maxi){
                array.push_back(true);
            }
            else
                array.push_back(false);
        }
        return array;
       
    }
};