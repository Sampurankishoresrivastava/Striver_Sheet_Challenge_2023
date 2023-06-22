class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        helper(matrix, 0, 0, matrix.size());
    }
    
    void helper(vector<vector<int>>& matrix, int row, int col, int size) {
        if (size == 0 || size == 1) return;
        int step = 0;
        int a, b, c, d;
        while (step < size - 1) {
            a = matrix[row][col + step];
            b = matrix[row + step][col + size - 1];
            c = matrix[row + size - 1][col + size - 1 - step];
            d = matrix[row + size - 1 - step][col];
            matrix[row + step][col + size - 1] = a;
            matrix[row + size - 1][col + size - 1 - step] = b;
            matrix[row + size - 1 - step][col] = c;
            matrix[row][col + step] = d;
            step++;
        }
        helper(matrix, row + 1, col + 1, size - 2);
    }
};
