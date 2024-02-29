class Solution {
public:
    bool isAnagram(string s, string t) {

        int n1 = s.size();
        int n2 = t.size();
        if(n1 != n2)
            return false;
         int count[256] = {0};
        for(int  i = 0 ; i<n2 ; i++){
            count[t[i]]++;
        }
        for(int i=0 ; i<n1 ;i++ ){
            count[s[i]]--;
        }
        for(int i =0 ; i<256 ; i++){
            if(count[i]!=0)
                return false;         
        }
        
        return true;
    }
};