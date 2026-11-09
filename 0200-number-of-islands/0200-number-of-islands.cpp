class Solution {
    private:
    void bfs(int row ,int col,vector<vector<int>>& v,vector<vector<char>>& grid){
        v[row][col]=1;
         int m=grid.size();
        int n=grid[0].size();
        queue<pair<int,int>>q;
        q.push({row,col});
        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
           int nro[]={0,-1,0,1};
           int nco[]={-1,0,1,0};
           for(int i=0;i<4;i++){
                    int nr=nro[i]+row;
                    int nc=nco[i]+col;
                    if(nr>=0 && nr<m && nc>=0 && nc<n && !v[nr][nc] &&  grid[nr][nc]=='1'){
                        v[nr][nc]=1;
                        q.push({nr,nc});
                    }
           }
            
        }

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>>v(m,vector<int>(n,0));
        int ct=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!v[i][j] && grid[i][j]=='1'){
                    ct++;
                    bfs(i,j,v,grid);
                }
            }
        }
        return ct;
    }
};