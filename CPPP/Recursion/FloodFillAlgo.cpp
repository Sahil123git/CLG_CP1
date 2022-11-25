#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &image, int initial, int i, int j, int color)
{
    int n = image.size();
    int m = image[0].size(); // n is the no. of columns and m is the no. of rows
    if (i < 0 || j < 0 || i >= n || j >= m)
        return; // if the index goes out of bound/matrix
    if (image[i][j] != initial || image[i][j] == color)
        return;                           // if the color does not match or initially it has been colored(to avoid self infinite loop)
    image[i][j] = color;                  // change the color as after the above conditions is satisfied means it is the required cell
    dfs(image, initial, i - 1, j, color); // look for left
    dfs(image, initial, i + 1, j, color); // look for right
    dfs(image, initial, i, j - 1, color); // look for up
    dfs(image, initial, i, j + 1, color); // look for down
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
{
    dfs(image, image[sr][sc], sr, sc, color); // call dfs from the source cell.
    return image;
}

int main()
{
    int sr, sc, color;
    cin >> sr >> sc >> color;

    vector<vector<int>> img;
    
}