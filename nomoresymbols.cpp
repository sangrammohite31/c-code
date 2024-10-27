#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <tuple> // Required for using std::tuple

using namespace std;

vector<pair<int, int>> get_moves(int x, int y) {
    return {{x, y}, {y, -x}, {-y, x}, {-x, -y}};
}

bool is_valid(vector<vector<int>>& grid, int row, int col) {
    return row >= 0 && row < grid.size() && col >= 0 && col < grid[0].size() && grid[row][col] == 0;
}

int bfs(vector<vector<int>>& grid, pair<int, int> source, pair<int, int> des, int x, int y) {
    int M = grid.size();
    int N = grid[0].size();
    queue<tuple<int, int, int>> q; // Use tuple for row, col, and steps
    set<pair<int, int>> found;
    
    q.push(make_tuple(source.first, source.second, 0));
    found.insert(source);
    
    vector<pair<int, int>> moves = get_moves(x, y);
    
    while (!q.empty()) {
        int row, col, steps;
        tie(row, col, steps) = q.front(); // Extract values from the tuple
        q.pop();
        
        if (row == des.first && col == des.second) {
            return steps;
        }
        
        for (const auto& move : moves) { // Explicit type declaration for move
            int dx = move.first;
            int dy = move.second;
            int new_row = row + dx;
            int new_col = col + dy;
            
            if (is_valid(grid, new_row, new_col) && found.find({new_row, new_col}) == found.end()) {
                found.insert({new_row, new_col});
                q.push(make_tuple(new_row, new_col, steps + 1));
            }
        }
    }
    
    return -1;
}

int main() {
    int M, N;
    cin >> M >> N;
    vector<vector<int>> grid(M, vector<int>(N));
    
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    
    pair<int, int> source, des;
    cin >> source.first >> source.second;
    cin >> des.first >> des.second;
    
    int x, y;
    cin >> x >> y;
    
    cout << bfs(grid, source, des, x, y) << endl;
    
    return 0;
}
