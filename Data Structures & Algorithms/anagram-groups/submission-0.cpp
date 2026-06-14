class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        int n=strs.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<n;i++){
            int arr[26]={0};
            string word = strs[i];
            for(char &ch:word){
                arr[ch-'a']++;
            }
            string newword = "";
            for(int i=0;i<26;i++){
                if(arr[i]>0){
                    newword += string(arr[i],i+'a');
                }
            }
            mp[newword].push_back(word);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
