class Solution {
public:
    bool solve(int i,int j,vector<vector<char>>& board,vector<vector<int>> row,vector<vector<int>> col,vector<vector<int>> cells){
        if(i==9) return 1;
        if(j==9) return solve(i+1,0,board,row,col,cells);
        if(board[i][j]!='.') return solve(i,j+1,board,row,col,cells);
        for(int x=1;x<=9;x++){
            cout<<x<<3*(i/3)+j/3<<endl;
            if(row[i][x-1] || col[j][x-1] || cells[3*(i/3)+j/3][x-1]) continue;
            row[i][x-1]=1;
            col[j][x-1]=1;
            cells[3*(i/3)+j/3][x-1]=1;
            board[i][j]=char('0'+x);
            if(solve(i,j+1,board,row,col,cells)) return 1;
            row[i][x-1]=0;
            col[j][x-1]=0;
            cells[3*(i/3)+j/3][x-1]=0;
            board[i][j]='.';
        }
        return 0;
    }
    void solveSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9,vector<int>(9,0)),col(9,vector<int>(9,0)),cells(9,vector<int>(9,0));
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int x=int(board[i][j]-'0');
                row[i][x-1]=1;
                col[j][x-1]=1;
                cells[3*(i/3)+j/3][x-1]=1;
            }
        }
        solve(0,0,board,row,col,cells);
    }
};
