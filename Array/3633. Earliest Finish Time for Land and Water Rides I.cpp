class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans=INT_MAX;
        int n=landStartTime.size();
        int m=waterStartTime.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int oneride=landStartTime[i]+landDuration[i];
                int secride;
                if(oneride<=waterStartTime[j]){
                    secride=waterStartTime[j]+waterDuration[j];
                }
                else{
                    secride=oneride+waterDuration[j];
                }
                ans=min(ans,secride);

                int oride=waterStartTime[j]+waterDuration[j];
                int seride;
                if(oride<=landStartTime[i]){
                    seride=landStartTime[i]+landDuration[i];
                }else{
                    seride=oride+landDuration[i];
                }
                ans=min(ans,seride);
            }
        }
        return ans;
    }
};
