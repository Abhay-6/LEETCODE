class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int perc=(int)(0.25*n);
        unordered_map<int,int> mp;
        for(auto n:arr){
            mp[n]++;
        }
        for(auto p:mp){
            if(p.second>perc){
                return p.first;
            }
        }
        return -1;
    }
};
