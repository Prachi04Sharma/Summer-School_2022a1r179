//Matrix Transpose...
//Given a 2D vector(matrix) of size 'n X m' , write a function to compute its transpose 
//(switch rows with columns).
//Example I/P : 1  2  3         Expected O/P : 1  4
//              4  5  6                        2  5
//                                             3  6

#include <iostream>
#include <vector>
using namespace std;

// Function to compute transpose of a matrix
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    // Create a new matrix with swapped dimensions
    vector<vector<int>> transposed(cols, vector<int>(rows));
    
    // Fill the transposed matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    return transposed;
}

// Function to display a matrix
void displayMatrix(const vector<vector<int>>& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to input matrix from user
vector<vector<int>> inputMatrix(int rows, int cols) {
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    return matrix;
}
int main() {
    cout << "Matrix Transpose Program" << endl;
    cout << "========================" << endl;
    
    // Example with predefined matrix
    cout << "\nExample with predefined matrix:" << endl;
    vector<vector<int>> example = {
        {1, 2, 3},
        {4, 5, 6}
    };    
    cout << "Original Matrix:" << endl;
    displayMatrix(example);    
    vector<vector<int>> transposedExample = transpose(example);
    cout << "\nTransposed Matrix:" << endl;
    displayMatrix(transposedExample);    
    // Interactive input
    cout << "\n\nNow try with your own matrix:" << endl;
    int rows, cols;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    vector<vector<int>> userMatrix = inputMatrix(rows, cols);
    
    cout << "\nYour Original Matrix:" << endl;
    displayMatrix(userMatrix);
    
    vector<vector<int>> transposedUser = transpose(userMatrix);
    cout << "\nTransposed Matrix:" << endl;
    displayMatrix(transposedUser);
    
    return 0;
}