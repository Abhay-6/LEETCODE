class Solution {
    public:
    string binaryrep(int m){
        string s="";
        while(m>0){
            s+=((m%2)+'0');
            m/=2;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    int count(string ss){
        int ans=0;
        for(int i=0;i<ss.length();i++){
            if(ss[i]=='1'){
                ans++;
            }
        }
        return ans;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            string ss=binaryrep(i);
            int cnt=count(ss);
            ans.push_back(cnt);
        }
        return ans;
    }
};
