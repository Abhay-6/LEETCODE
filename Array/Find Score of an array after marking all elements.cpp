class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score=0;
        long long n=nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        vector<bool> marked(n,false);
        for(auto p:v){
            int val=p.first;
            int ind=p.second;
            if(marked[ind]){
                continue;
            }
            score+=val;
            marked[ind]=true;
            if(ind-1>=0){
                marked[ind-1]=true;
            }
            if(ind+1<n){
                marked[ind+1]=true;
            }
        }
        return score;
    }
};
