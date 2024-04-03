class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();
        
        function<bool(int, int, int)> backtrack = [&](int i, int j, int k) {
            if (k == word.length()) {
                return true;
            }
            if (i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]) {
                return false;
            }
            
            char temp = board[i][j];
            board[i][j] = '\0';
            
            if (backtrack(i + 1, j, k + 1) || backtrack(i - 1, j, k + 1) || 
                backtrack(i, j + 1, k + 1) || backtrack(i, j - 1, k + 1)) {
                return true;
            }
            
            board[i][j] = temp; 
            return false;
        };
        
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (backtrack(i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};

//beats 99.60% users - more efficient than the 1st one
#include <vector>
using namespace std;

class Solution {
public:
    // Main function to check if the word exists on the board
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(); // Number of rows in the board
        int m = board[0].size(); // Number of columns in the board
        
        vector<vector<bool>> visited(n, vector<bool>(m, false)); // Array to keep track of visited cells
        
        // Convert the word into a character array
        vector<char> wordChar(word.begin(), word.end());
        
        // Quick check: If the length of the word exceeds the total number of cells on the board, it can't exist
        if (wordChar.size() > n * m)
            return false;
        
        vector<int> counts(256, 0); // Array to store counts of each character
        
        // Count the occurrence of each character on the board
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                counts[board[i][j]]++;
            }
        }
        
        // Adjust the order of characters in the wordChar array based on their frequency counts to optimize search
        int len = wordChar.size();
        for (int i = 0; i < len / 2; i++) {
            if (counts[wordChar[i]] > counts[wordChar[len - 1 - i]]) {
                for (int j = 0; j < len / 2; j++) {
                    char temp = wordChar[j];
                    wordChar[j] = wordChar[len - 1 - j];
                    wordChar[len - 1 - j] = temp;
                }
                break;
            }
        }
        
        // Decrease counts of characters in the word from the board
        for (char c : wordChar) {
            if (--counts[c] < 0)
                return false; // If there are more occurrences of a character in the word than on the board, return false
        }
        
        // Iterate through each cell in the board and start searching for the word
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visit(board, wordChar, 0, i, j, n, m, visited))
                    return true; // If the word is found starting from this cell, return true
            }
        }
        return false; // If the loop completes without finding the word, return false
    }

    // Helper function to recursively search for the word starting from a given cell
    bool visit(vector<vector<char>>& board, vector<char>& word, int start, int x, int y,
            int n, int m, vector<vector<bool>>& visited) {
        // Base case: If all characters in the word are found, return true
        if (start == word.size())
            return true;
        
        // Check for out-of-bounds, already visited cells, and character mismatch
        if (x < 0 || x >= n || y < 0 || y >= m || visited[x][y])
            return false;
        
        // If the current character in the word does not match the character on the board, return false
        if (word[start] != board[x][y])
            return false;
        
        visited[x][y] = true; // Mark the current cell as visited
        
        // Recursively search in all four directions from the current cell
        bool found = visit(board, word, start + 1, x + 1, y, n, m, visited)
                || visit(board, word, start + 1, x - 1, y, n, m, visited)
                || visit(board, word, start + 1, x, y + 1, n, m, visited)
                || visit(board, word, start + 1, x, y - 1, n, m, visited);
        
        visited[x][y] = false; // Backtrack: Unmark the current cell as visited
        
        return found; // Return whether the word was found starting from the current cell
    }
};

//quite looks easy
#include <vector>
#include <string>

class Solution {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word) {
        int rows = board.size();
        int cols = board[0].size();

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (solve(board, rows, cols, i, j, word, 0)) return true;
            }
        }
        return false;
    }

private:
    std::vector<int> rowDirections = {1, -1, 0, 0};
    std::vector<int> colDirections = {0, 0, 1, -1};

    bool solve(std::vector<std::vector<char>>& board, int rows, int cols, int row, int col, const std::string& word, int index) {
        if (index == word.length()) return true;
        if (row < 0 || row >= rows || col < 0 || col >= cols || board[row][col] != word[index]) return false;
        char temp = board[row][col];
        board[row][col] = '.';

        for (int d = 0; d < 4; d++) {
            int newRow = row + rowDirections[d];
            int newCol = col + colDirections[d];
            if (solve(board, rows, cols, newRow, newCol, word, index + 1)) return true;
        }

        board[row][col] = temp;
        return false;
    }
};



