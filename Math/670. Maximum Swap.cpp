class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        int n=s.length();

        vector<int> last(10,-1);

        for(int i=0;i<n;i++){
            last[s[i]-'0']=i;
        }
        for(int i=0;i<n;i++){
            int curr=s[i]-'0';
            for(int d=9;d>curr;d--){
                if(last[d]>i){
                    swap(s[i],s[last[d]]);
                    return stoi(s);
                }
            }
        }
        return num;

        //passed only 56 test cases
        // for(int i=0;i<s.length()-1;i++){
        //     if(s[i]<s[i+1]){
        //         swap(s[i],s[i+1]);
        //         break;
        //     }
        // }
        // int ans=stoi(s);
        // return ans;
    }
};
