class Solution {
public:
    int minimumPushes(string word) {
        int cnt=1;
        int ans=0;
        int n=word.length();
        for(int i=0;i<n;i++){
            if(cnt<9){
                ans++;
                cnt++;
            }
            else if(cnt>8 && cnt<=16){
                ans+=2;
                cnt++;
            }
            else if(cnt>16 && cnt<=24){
                ans+=3;
                cnt++;
            }else if(cnt>24 && cnt<=26){
                ans+=4;
                cnt++;
            }
        }
        return ans;
    }
};
