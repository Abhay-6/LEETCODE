class Solution {
    public int passwordStrength(String password) {
        int ans=0;
        HashSet<Character> s = new HashSet<>();
        for(char c:password.toCharArray()){
            if(s.contains(c)){
                continue;
            }
            s.add(c);
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
}
