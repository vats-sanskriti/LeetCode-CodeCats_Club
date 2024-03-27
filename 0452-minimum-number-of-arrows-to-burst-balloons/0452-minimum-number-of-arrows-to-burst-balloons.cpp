class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count = 1;
        int endpoint = INT_MAX;
        
        sort(points.begin() , points.end());
        
        
        for(auto x : points){
            int start = x[0];
            int end = x[1];
            
            if(start>endpoint){
                count++;
                endpoint = end ;
            }
            else{
                endpoint  = min(endpoint,end);
            }
            
        }
        return count ;
    }
};