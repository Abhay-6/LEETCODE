class Solution {
    public:
    char check(vector<vector<char>> &v){
        for(int i=0;i<3;i++){
            //row
            if(v[i][0]==v[i][1] && v[i][0]==v[i][2] && v[i][0]!=' '){
                return v[i][0];
            }
            //col
            if(v[0][i]==v[1][i] && v[0][i]==v[2][i] && v[0][i]!=' '){
                return v[0][i];
            }
        }
        //diagonals
        if(v[0][0]==v[1][1] && v[0][0]==v[2][2] && v[1][1]!=' '){
            return v[1][1];
        }
        if(v[0][2]==v[1][1] && v[0][2]==v[2][0] && v[1][1]!=' '){
            return v[1][1];
        }
        return ' ';
    }
public:
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        vector<vector<char>> v(3,vector<char>(3,' '));
        char turn='X';
        for(int i=0;i<n;i++){
            int a=moves[i][0];
            int b=moves[i][1];
            v[a][b]=turn;
            if(turn=='X'){
                turn='O';
            }else{
                turn='X';
            }
        }
        char res=check(v);
        if(res==' '){
            return moves.size()==9?"Draw":"Pending";
        }
        return res=='X'?"A":"B";
    }
};
