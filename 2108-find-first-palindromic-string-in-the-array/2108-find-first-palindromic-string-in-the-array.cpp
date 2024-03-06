class Solution {
public:
     bool ispalindrome(string& s){
         int i = 0 ;
         int e = s.size()-1;
         while(i<e){
         while(s[i]!= s[e])
             return false;
         
         i++;
         e--;}
         return true;
     }
    
    
    string firstPalindrome(vector<string>& words) {
        
        for(string& st : words){
            if(ispalindrome(st))
                return st ;      
        }
        
        return "";
        
    }
};