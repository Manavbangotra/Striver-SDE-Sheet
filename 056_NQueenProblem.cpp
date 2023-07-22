//leetcode
class Solution {
private:
    bool isSafe(vector<int>& flag, int n, int row, int col)
    {
        if (flag[col] == 1 || flag[n + col + row] == 1 || flag[4 * n - 2 + col - row] == 1)
            return false;
        return true;
    }
    void placeQueen(vector<string>& board, vector<int>& flag, int n, int row, int col)
    {
        board[row][col] = 'Q';
        flag[col] = 1;
        flag[n + col + row] = 1;
        flag[4 * n - 2 + col - row] = 1;
    }
    void removeQueen(vector<string>& board, vector<int>& flag, int n, int row, int col)
    {
        board[row][col] = '.';
        flag[col] = 0;
        flag[n + col + row] = 0;
        flag[4 * n - 2 + col - row] = 0;
    }
    void backtrackNQueen(vector<vector<string>>& res, vector<string>& board, vector<int>& flag, int row)
    {
        int n = board.size();
        if (row == n) {
            res.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (isSafe(flag, n, row, col)) {
                placeQueen(board, flag, n, row, col);
                backtrackNQueen(res, board, flag, row + 1);
                removeQueen(board, flag, n, row, col);
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.'));
        vector<int> flag(5 * n - 2, 0);
        backtrackNQueen(res, board, flag, 0);
        return res;
    }
};
