class Solution {
public:
    void dfs(int i, int j, int initialcolor, int newcolor, vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || j < 0)return;
        if (i >= n || j >= m)return;
        if (grid[i][j] != initialcolor)return;

        grid[i][j] = newcolor;
        dfs(i - 1, j, initialcolor, newcolor, grid);
        dfs(i + 1, j, initialcolor, newcolor, grid);
        dfs(i, j - 1, initialcolor, newcolor, grid);
        dfs(i, j + 1, initialcolor, newcolor, grid);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        int initialcolor = image[sr][sc];
        if (initialcolor != newcolor) {
            dfs(sr, sc, initialcolor, newcolor, image);
        }
        return image;
    }
};