////Rotate Image(leet:48)
// #include <iostream>
// #include <vector>
// using namespace std;
// void rotate(vector<vector<int>>& matrix) {
//     int n = matrix.size();
//     // Transpose the matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             swap(matrix[i][j], matrix[j][i]);
//         }
//     }
//     // Reverse each row
//     for (int i = 0; i < n; i++) {
//         reverse(matrix[i].begin(), matrix[i].end());
//     }
//     // Print the rotated matrix
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < matrix[i].size(); j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// int main() {
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     rotate(matrix);
//     return 0;
// }
