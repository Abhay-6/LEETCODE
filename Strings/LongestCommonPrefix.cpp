// Problem: Longest Common Prefix
// Platform: LeetCode
class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int ans=0;
        unordered_set<string> set;
        for(auto num:arr1){
            string s=to_string(num);
            string temp="";
            for(char ch:s){
                temp+=ch;
                set.insert(temp);
            }
        }
        for(auto num:arr2){
            string s=to_string(num);
            string temp="";
            for(char ch:s){
                temp+=ch;
                int n=temp.length();
                if(set.find(temp)!=set.end()){
                    ans=max(ans,n);
                }
            }
        }
        return ans;
    }
};
