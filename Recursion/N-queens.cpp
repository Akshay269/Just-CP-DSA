#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//     bool isSafe(int row, int col, vector<string> &board, int n)
//     {
//         int duprow = row;
//         int dupcol = col;
//         while (row >= 0 && col >= 0)//diag up left
//         {
//             if (board[row][col] == 'Q')
//                 return false;
//             row--;
//             col--;
//         }

//         col = dupcol;
//         while (col >= 0)//left
//         {
//             if (board[row][col] == 'Q')
//                 return false;
//             col--;
//         }

//         row = duprow;
//         col = dupcol;
//         while (row < n && col >= 0)//diag down left
//         {
//             if (board[row][col] == 'Q')
//                 return false;
//             row++;
//             col--;
//         }
//         return true;
//     }

// public:
//     void solve(int col, vector<string> &board, vector<vector<string>> &ans, int n)
//     {
//         // Base Case:
//         if (col == n)
//         {
//             ans.push_back(board);
//             return;
//         }

//         // Main Case
//         for (int row = 0; row < n; row++)
//         {
//             if (isSafe(row, col, board, n))
//             {
//                 board[row][col]='Q';//filling of cell
//                 solve(col + 1, board, ans, n);
//                 board[row][col] = '.'; // backtracking step ; ommitting the filled space
//             }
//         }
//     }

// Optimized Solution
class Solution
{
public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> res;
        vector<string> nQueens(n, string(n, '.'));
        solveNQueens(res, nQueens, 0, n);
        return res;
    }

private:
    void solveNQueens(vector<vector<string>> &res, vector<string> &nQueens, int row, int &n)
    {
        if (row == n)
        {
            res.push_back(nQueens);
            return;
        }
        for (int col = 0; col != n; ++col)
            if (isValid(nQueens, row, col, n))
            {
                nQueens[row][col] = 'Q';
                solveNQueens(res, nQueens, row + 1, n);
                nQueens[row][col] = '.';
            }
    }
    bool isValid(vector<string> &nQueens, int row, int col, int &n)
    {
        // check if the column had a queen before.
        for (int i = 0; i != row; ++i)
            if (nQueens[i][col] == 'Q')
                return false;
        // check if the 45° diagonal had a queen before.
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (nQueens[i][j] == 'Q')
                return false;
        // check if the 135° diagonal had a queen before.
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (nQueens[i][j] == 'Q')
                return false;
        return true;
    }
};

vector<vector<string>> solveNQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
        board[i] = s;
    solve(0, board, ans, n);
    return ans;
}

int main()
{

    return 0;
}