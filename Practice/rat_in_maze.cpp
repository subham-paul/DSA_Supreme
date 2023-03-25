#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int i, int j, int row, int col, int arr[][3], vector<vector<bool>> &visited) {
    if((i>=0 && i<row) && (j>=0 && j<col) && (arr[i][j] == 1) &&(visited[i][j] ==false)) {
        return true;
    } else {
        return false;
    }
}

void solveMaze(int arr[3][3], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output) {
    // base case
    if(i == row-1 && j==col-1){
        // ans found
        path.push_back(output);
        return;
    }
    // down -> (i+1,j)
    if(isSafe(i+1, j, row,col, arr,visited)){
        visited[i+1][j] = true;
        solveMaze(arr, row, col, i+1, j, visited, path, output+'D');
        // backtrack
        visited[i+1][j] =false;
    }
}
int main(){
    return 0;
}