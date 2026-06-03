class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> ans;
        unordered_map<int,string> mp;
        int m=heights.size();
        int i=0;
        while(i<m){
            mp[heights[i]]=names[i];
            i++;
        }
        sort(heights.rbegin(),heights.rend());
        for(int c:heights){
            string s=mp[c];
            ans.push_back(s);
        }
        return ans;
    }
};
