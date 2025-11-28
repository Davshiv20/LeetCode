class Solution {
public:
    bool isSafe(int row, int col, vector<string>&board){
        int r = row;
        int c = col;
        while(r>=0 && c>=0){ // left diagonal
            if(board[r][c]=='Q') return false;
            r--;
            c--;
        }
        r = row;
        c = col;
        while(r>=0){
            if(board[r][c]=='Q') return false;
            r--;
        }
        r = row;
        c = col;
        while(r>=0 && c<=board[0].size()-1){
            if(board[r][c]=='Q') return false;
            r--;
            c++;
        }
        return true;
    }
    void solve(int row, vector<string>&board,vector<vector<string>>&res){
        if(row==board.size()){
            res.push_back(board);
            return;
        }
        for(int col = 0;col<board[0].size();col++){
            if(isSafe(row,col,board)){
                board[row][col]='Q';
                solve(row+1,board,res);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>res;
        solve(0,board,res);
        return res;
    }
};