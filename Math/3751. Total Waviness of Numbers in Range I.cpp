class Solution {
    public:
    int peakvalley(int num){
        int ans=0;
        string s=to_string(num);
        for(int i=1;i<s.length()-1;i++){
            int n=s[i]-'0';
            int aage=s[i+1]-'0';
            int piche=s[i-1]-'0';
            if(n>aage && n>piche){
                ans++;
            }
            if(n<aage && n<piche){
                ans++;
            }
        }
        return ans;
    }
public:
    int totalWaviness(int num1, int num2) {
        int sum=0;
        for(int i=num1;i<=num2;i++){
            int p=peakvalley(i);
            sum+=p;
        }
        return sum;
    }
};
