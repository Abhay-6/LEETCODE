class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.length();
        int m=version2.length();
        int i=0;
        int j=0;
        while(i<n || j<m){
            string s1="";
            string s2="";

            while(i<n && version1[i]!='.'){
                s1+=version1[i];
                i++;
            }
            while(j<m && version2[j]!='.'){
                s2+=version2[j];
                j++;
            }

            int num1=s1.empty()?0:stoi(s1);
            int num2=s2.empty()?0:stoi(s2);

            if(num1<num2){
                return -1;
            }else if(num1>num2){
                return 1;
            }
            i++;
            j++;
        }
        return 0;
    }
};
