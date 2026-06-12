class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char, int>mp;
        for(auto x:s){
            mp[x]++;
        }
        for(auto i: t){
            if(mp.find(i)==mp.end() || mp[i] == 0) return false;
            mp[i]--;
        }
        return true;
    }
};