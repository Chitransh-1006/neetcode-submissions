class Solution {
public:
    bool isPalindrome(string s) {
        bool ans = true;
        int j=0;
        for(char c:s){
            if(isalnum(c)){
            s[j++]=tolower(c);
            }
        }
        s.resize(j);
        int f=0,l=s.length()-1;
        while(f<l){
            if(s[f]==s[l]){f++;l--;}
            else{return false;}
        }
        return true;
    }
};
