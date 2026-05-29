class Solution {
    private:
void addAnswer(vector<vector<char>> &board, vector<vector<string>> &ans, int n) {
	vector<string> temp;

	for (int i=0; i<n; i++) {
        string row="";
		for (int j=0; j<n; j++) {
			row+=board[i][j];
		}
        temp.push_back(row);
	}
	ans.push_back(temp);
}

// fucntion to find whether the placing queen in next column is safe or not
bool isSafe(int row, int col, vector<vector<char>> &board, int n) {
	int x = row;
	int y = col;

	// checking in row
	while (y >= 0) {
		if (board[x][y] == 'Q') {
			return false;
		}
		y--;
	}

	// checking for column is not required because we already placing one queen in one column only

    for (int y = 0; y < col; y++) {
            if (board[row][y] == 'Q') {
                return false;
            }
        }

        // Check upper diagonal on the left side
        for (int x = row, y = col; x >= 0 && y >= 0; x--, y--) {
            if (board[x][y] == 'Q') {
                return false;
            }
        }

        // Check lower diagonal on the left side
        for (int x = row, y = col; x < n && y >= 0; x++, y--) {
            if (board[x][y] == 'Q') {
                return false;
            }
        }

	// checking for upper diagonal
	/*x = row;
	y = col;
	while (x >= 0 && y >= 0) {
		if (board[x][y] == 'Q') {
			return false;
		}
		x--;
		y--;
	}

	// checking for lower diagonal
	x = row;
	y = col;
	while (x < n && y >= 0) {
		if (board[x][y] == 'Q') {
			return false;
		}
		x++;
		y--;
	}*/

	return true;
}

// fucntion to find the possible solution to place n queens
void solve(int col, vector<vector<char>> &board, vector<vector<string>> &ans, int n) {
	// base case
	if (col == n) {
		addAnswer(board, ans, n);
		return ;
	}

	for (int row=0; row<n; row++) {
		if (isSafe(row, col, board, n)) {
			board[row][col] = 'Q';
			solve(col+1, board, ans, n);
			board[row][col] = '.';
		}
	}
}
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char>> board(n, vector<char> (n, '.'));
	    vector<vector<string>> ans;
	    solve(0, board, ans, n);
	    return ans;
    }
};
