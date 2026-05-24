class Solution {
public:
    int passwordStrength(string password) {
        int ans=0;
        unordered_set<char> s;
        for(char c:password){
            if(s.find(c)!=s.end()){
                continue;
            }
            s.insert(c);
            if(c>='a' && c<='z'){
                ans+=1;
            }
            else if(c>='A' && c<='Z'){
                ans+=2;
            }
            else if(c>='0'&& c<='9'){
                ans+=3;
            }
            else if(c=='!' || c=='@'|| c=='#'|| c=='$'){
                ans+=5;
            }
        }
        return ans;
    }
};
