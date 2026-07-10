class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        int ans=0;
        vector<vector<int>> v;
        vector<int> chota;
        chota.push_back(intervals[0][0]);
        chota.push_back(intervals[0][1]);
        v.push_back(chota);
        for(int i=1;i<n;i++){
            int a=intervals[i][0];
            int b=intervals[i][1];
            if((a<=v.back()[0] && b>=v.back()[1])){
                v.back()[0]=a;
                v.back()[1]=b;
            }
            else if(a>v.back()[0] && b<v.back()[1]){
                continue;
            }
            else if(a>v.back()[0] && b==v.back()[1]){
                v.back()[0]=v.back()[0];
                v.back()[1]=v.back()[1];
            }
            else{
                vector<int> oc;
                oc.push_back(a);
                oc.push_back(b);
                v.push_back(oc);
            }
        }
        return v.size();
    }
};
