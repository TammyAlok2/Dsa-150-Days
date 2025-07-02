class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int oldColor, int newColor) {
        int n = image.size(), m = image[0].size();
        if (i < 0 || j < 0 || i >= n || j >= m || image[i][j] != oldColor)
            return;

        image[i][j] = newColor;

        dfs(image, i+1, j, oldColor, newColor); // down
        dfs(image, i-1, j, oldColor, newColor); // up
        dfs(image, i, j+1, oldColor, newColor); // right
        dfs(image, i, j-1, oldColor, newColor); // left
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor = image[sr][sc];
        if (oldColor == newColor) return image;

        dfs(image, sr, sc, oldColor, newColor);
        return image;
    }
};
