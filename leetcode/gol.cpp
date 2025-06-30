#include <vector>

using namespace std;

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) { 
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> nextboard(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int liveneighbors = 0;
                if (i > 0 && j > 0) liveneighbors += board[i-1][j-1];
                if (i > 0) liveneighbors += board[i-1][j];
                if (i > 0 && j < n-1) liveneighbors += board[i-1][j+1];
                if (j > 0) liveneighbors += board[i][j-1];
                if (j < n-1) liveneighbors += board[i][j+1];
                if (i < m-1 && j > 0) liveneighbors += board[i+1][j-1];
                if (i < m-1 ) liveneighbors += board[i+1][j];
                if (i < m-1 && j < n-1) liveneighbors += board[i+1][j+1];

                if (board[i][j] == 1) {
                    if (liveneighbors < 2) nextboard[i][j] = 0;
                    else if (liveneighbors > 1 && liveneighbors < 4) nextboard[i][j] = 1;
                    else if (liveneighbors > 3) nextboard[i][j] = 0;
                }
                else {
                    if(liveneighbors == 3) nextboard[i][j] = 1;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                board[i][j] = nextboard[i][j];
            }
        }
    }
};

class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) { 
        int m = board.size();
        int n = board[0].size();
        vector<vector<int>> nextboard(m, vector<int>(n, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int live_neighbours = 0;
                for(int k = i-1; k < i+2; k++) {
                    for (int o = j-1; o < j+2; o++) {
                        if (k == i && o == j) continue;
                        if (k >= 0 && k < m && o >= 0 && o < n) {
                            live_neighbours += board[k][o];
                        }
                    }
                }
                if (board[i][j] == 1) {
                    if (live_neighbours < 2) nextboard[i][j] = 0;
                    else if (live_neighbours > 1 && live_neighbours < 4) nextboard[i][j] = 1;
                    else if (live_neighbours > 3) nextboard[i][j] = 0;
                }
                else {
                    if(live_neighbours == 3) nextboard[i][j] = 1;
                }
            }
        }

        board = nextboard;
    }
};