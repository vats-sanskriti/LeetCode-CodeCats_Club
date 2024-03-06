class Solution {
public:
    int minimumLength(string s) {
        int i = 0 ;
        int e = s.size()-1;
            while(i<e){
                if(s[i]!=s[e])
                    break;
                else{
                    while(s[i+1]==s[e] && i+1 <e)
                        i++ ;
                    while(s[i] == s[e-1] && i<e-1)
                        e--;
                    i++;
                    e--;
                }
            }
        return e-i+1;
    }
};