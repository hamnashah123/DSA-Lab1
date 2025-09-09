// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to find all indices of a given key
// vector<int> findIndices(vector<double> inputVector, double key) {
//     vector<int> outputVector;
//     for (int i = 0; i < inputVector.size(); i++) {
//         if (inputVector[i] == key) {
//             outputVector.push_back(i);
//         }
//     }
//     return outputVector;
// }

// // Test Case 1: Multiple Occurrences
// void testCase1() {
//     vector<double> arr = { 10.5, 22.7, 10.5, 33.3, 44.1, 10.5 };
//     double key = 10.5;

//     vector<int> indices = findIndices(arr, key);

//     cout << "\nTest Case 1: Multiple Occurrences\n";
//     if (indices.empty()) {
//         cout << "The key is absent\n";
//     }
//     else {
//         cout << "The key is found at indices: ";
//         for (int idx : indices) cout << idx << " ";
//         cout << endl;
//     }
// }

// // Test Case 2: Absent Key
// void testCase2() {
//     vector<double> arr = { 5.5, 12.3, 19.9, 7.7, 8.8 };
//     double key = 99.9;

//     vector<int> indices = findIndices(arr, key);

//     cout << "\nTest Case 2: Absent Key\n";
//     if (indices.empty()) {
//         cout << "The key is absent\n";
//     }
//     else {
//         cout << "The key is found at indices: ";
//         for (int idx : indices) cout << idx << " ";
//         cout << endl;
//     }
// }

// // Test Case 3: Empty Array
// void testCase3() {
//     vector<double> arr = {}; 
//     double key = 42.0;

//     vector<int> indices = findIndices(arr, key);

//     cout << "\nTest Case 3: Empty Array\n";
//     if (indices.empty()) {
//         cout << "The key is absent\n";
//     }
//     else {
//         cout << "The key is found at indices: ";
//         for (int idx : indices) cout << idx << " ";
//         cout << endl;
//     }
// }

// // Main only runs the test cases
// int main() {
//     testCase1();
//     testCase2();
//     testCase3();
//     return 0;
// }














// #include <iostream>
// #include <string>
// using namespace std;


// int naivePatternMatch(string text, string pattern) {
//     if (pattern.empty()) return -1; 

//     int n = text.size();
//     int m = pattern.size();


//     for (int i = 0; i <= n - m; i++) {
//         int j;
//         for (j = 0; j < m; j++) {
//             if (text[i + j] != pattern[j]) break;
//         }
//         if (j == m) return i; 
//     }
//     return -1; 
// }

// // Test Case 1: Pattern at the beginning
// void testCase1() {
//     string text = "datastructures";
//     string pattern = "data";

//     int index = naivePatternMatch(text, pattern);

//     cout << "\nTest Case 1: Pattern at the Beginning\n";
//     cout << "Text: " << text << "\nPattern: " << pattern << endl;
//     if (index == -1)
//         cout << "Pattern not found\n";
//     else
//         cout << "Pattern found at index " << index << endl;
// }

// // Test Case 2: Pattern at the end
// void testCase2() {
//     string text = "the summer i turned pretty";
//     string pattern = "pretty";

//     int index = naivePatternMatch(text, pattern);

//     cout << "\nTest Case 2: Pattern at the End\n";
//     cout << "Text: " << text << "\nPattern: " << pattern << endl;
//     if (index == -1)
//         cout << "Pattern not found\n";
//     else
//         cout << "Pattern found at index " << index << endl;
// }

// // Test Case 3: Pattern not present
// void testCase3() {
//     string text = "computer";
//     string pattern = "instagram";

//     int index = naivePatternMatch(text, pattern);

//     cout << "\nTest Case 3: Pattern Not Present\n";
//     cout << "Text: " << text << "\nPattern: " << pattern << endl;
//     if (index == -1)
//         cout << "Pattern not found\n";
//     else
//         cout << "Pattern found at index " << index << endl;
// }

// // Test Case 4: Empty pattern
// void testCase4() {
//     string text = "algorithm";
//     string pattern = "";

//     int index = naivePatternMatch(text, pattern);

//     cout << "\nTest Case 4: Empty Pattern\n";
//     cout << "Text: " << text << "\nPattern: (empty)\n";
//     if (index == -1)
//         cout << "Pattern not found (empty pattern)\n";
//     else
//         cout << "Pattern found at index " << index << endl;
// }

// // Main only runs test cases
// int main() {
//     testCase1();
//     testCase2();
//     testCase3();
//     testCase4();
//     return 0;
// }









// #include <iostream>
// #include <vector>
// using namespace std;


// vector<vector<int>> generatePascalsTriangle(int n) {
//     vector<vector<int>> triangle;

//     for (int i = 0; i < n; i++) {
//         vector<int> row(i + 1, 1); // each row starts & ends with 1
//         for (int j = 1; j < i; j++) {
//             row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
//         }
//         triangle.push_back(row);
//     }

//     return triangle;
// }


// void printTriangle(const vector<vector<int>>& triangle) {
//     for (const auto& row : triangle) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// }

// // Test Case 1: n = 0
// void testCase1() {
//     int n = 0;
//     cout << "\nTest Case 1: n = 0\n";
//     vector<vector<int>> triangle = generatePascalsTriangle(n);
//     if (triangle.empty()) {
//         cout << "Triangle is empty\n";
//     } else {
//         printTriangle(triangle);
//     }
// }

// // Test Case 2: n = 1
// void testCase2() {
//     int n = 1;
//     cout << "\nTest Case 2: n = 1\n";
//     vector<vector<int>> triangle = generatePascalsTriangle(n);
//     printTriangle(triangle);
// }

// // Test Case 3: n = 5
// void testCase3() {
//     int n = 5;
//     cout << "\nTest Case 3: n = 5\n";
//     vector<vector<int>> triangle = generatePascalsTriangle(n);
//     printTriangle(triangle);

//     cout << "Row 5 should be: {1, 4, 6, 4, 1}\n";
//     cout << "Row 5 generated: ";
//     for (int val : triangle[4]) { 
//         cout << val << " ";
//     }
//     cout << endl;
// }

// int main() {
//     testCase1();
//     testCase2();
//     testCase3();
//     return 0;
// }









// #include <iostream>
// #include <vector>
// using namespace std;


// vector<int> findMode(const vector<int>& arr) {
//     vector<int> modes;
//     if (arr.empty()) return modes;

//     int n = arr.size();
//     int maxFreq = 0;

  
//     for (int i = 0; i < n; i++) {
//         int count = 0;
//         for (int j = 0; j < n; j++) {
//             if (arr[j] == arr[i]) {
//                 count++;
//             }
//         }
//         if (count > maxFreq) {
//             maxFreq = count;
//             modes.clear();      
//             modes.push_back(arr[i]);
//         }
//         else if (count == maxFreq) {
          
//             bool alreadyAdded = false;
//             for (int m : modes) {
//                 if (m == arr[i]) {
//                     alreadyAdded = true;
//                     break;
//                 }
//             }
//             if (!alreadyAdded) {
//                 modes.push_back(arr[i]);
//             }
//         }
//     }

//     return modes;
// }

// // Test Case 1: Array with unique mode
// void testCase1() {
//     vector<int> arr = {1, 2, 2, 3, 4};
//     cout << "\nTest Case 1: Unique Mode\nArray: {1, 2, 2, 3, 4}\n";

//     vector<int> modes = findMode(arr);
//     if (modes.empty()) {
//         cout << "Array is empty\n";
//     } else {
//         cout << "Mode: ";
//         for (int m : modes) cout << m << " ";
//         cout << endl;
//     }
// }

// // Test Case 2: Array with multiple modes
// void testCase2() {
//     vector<int> arr = {5, 6, 5, 7, 6};
//     cout << "\nTest Case 2: Multiple Modes\nArray: {5, 6, 5, 7, 6}\n";

//     vector<int> modes = findMode(arr);
//     if (modes.empty()) {
//         cout << "Array is empty\n";
//     } else {
//         cout << "Modes: ";
//         for (int m : modes) cout << m << " ";
//         cout << endl;
//     }
// }

// // Test Case 3: Empty array
// void testCase3() {
//     vector<int> arr = {};
//     cout << "\nTest Case 3: Empty Array\nArray: {}\n";

//     vector<int> modes = findMode(arr);
//     if (modes.empty()) {
//         cout << "Array is empty, no mode\n";
//     } else {
//         cout << "Mode: ";
//         for (int m : modes) cout << m << " ";
//         cout << endl;
//     }
// }

// int main() {
//     testCase1();
//     testCase2();
//     testCase3();
//     return 0;
// }









#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef vector<vector<int>> Matrix;


Matrix createMatrix(int n) {
    return Matrix(n, vector<int>(n, 0));
}


void printMatrix(const Matrix& M) {
    for (auto row : M) {
        for (int val : row) cout << val << " ";
        cout << endl;
    }
}


Matrix naiveMultiply(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C = createMatrix(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return C;
}


Matrix add(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C = createMatrix(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] + B[i][j];
    return C;
}


Matrix subtract(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C = createMatrix(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = A[i][j] - B[i][j];
    return C;
}

// Strassen’s multiplication 
Matrix strassenMultiply(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C = createMatrix(n);

    
    if (n == 1) {
        C[0][0] = A[0][0] * B[0][0];
        return C;
    }

    int k = n / 2;

    
    Matrix A11(k, vector<int>(k)), A12(k, vector<int>(k)),
           A21(k, vector<int>(k)), A22(k, vector<int>(k));
    Matrix B11(k, vector<int>(k)), B12(k, vector<int>(k)),
           B21(k, vector<int>(k)), B22(k, vector<int>(k));

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][j + k];
            A21[i][j] = A[i + k][j];
            A22[i][j] = A[i + k][j + k];

            B11[i][j] = B[i][j];
            B12[i][j] = B[i][j + k];
            B21[i][j] = B[i + k][j];
            B22[i][j] = B[i + k][j + k];
        }
    }


    Matrix M1 = strassenMultiply(add(A11, A22), add(B11, B22));
    Matrix M2 = strassenMultiply(add(A21, A22), B11);
    Matrix M3 = strassenMultiply(A11, subtract(B12, B22));
    Matrix M4 = strassenMultiply(A22, subtract(B21, B11));
    Matrix M5 = strassenMultiply(add(A11, A12), B22);
    Matrix M6 = strassenMultiply(subtract(A21, A11), add(B11, B12));
    Matrix M7 = strassenMultiply(subtract(A12, A22), add(B21, B22));

   
    Matrix C11 = add(subtract(add(M1, M4), M5), M7);
    Matrix C12 = add(M3, M5);
    Matrix C21 = add(M2, M4);
    Matrix C22 = add(subtract(add(M1, M3), M2), M6);

   
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k; j++) {
            C[i][j] = C11[i][j];
            C[i][j + k] = C12[i][j];
            C[i + k][j] = C21[i][j];
            C[i + k][j + k] = C22[i][j];
        }
    }

    return C;
}



// Test Case 1: 2×2 matrix multiplication
void testCase1() {
    Matrix A = {{1, 2}, {3, 4}};
    Matrix B = {{5, 6}, {7, 8}};

    cout << "\nTest Case 1: 2x2 Matrices\n";
    Matrix C1 = naiveMultiply(A, B);
    Matrix C2 = strassenMultiply(A, B);

    cout << "Naive Result:\n"; printMatrix(C1);
    cout << "Strassen Result:\n"; printMatrix(C2);
}

// Test Case 2: 4×4 matrix multiplication
void testCase2() {
    Matrix A = {{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15, 16}};

    Matrix B = {{16, 15, 14, 13},
                {12, 11, 10, 9},
                {8, 7, 6, 5},
                {4, 3, 2, 1}};

    cout << "\nTest Case 2: 4x4 Matrices\n";
    Matrix C1 = naiveMultiply(A, B);
    Matrix C2 = strassenMultiply(A, B);

    cout << "Naive Result:\n"; printMatrix(C1);
    cout << "Strassen Result:\n"; printMatrix(C2);
}

// Test Case 3: Random values
void testCase3() {
    int n = 4;
    srand(time(0));

    Matrix A = createMatrix(n), B = createMatrix(n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }

    cout << "\nTest Case 3: Random 4x4 Matrices\n";
    cout << "Matrix A:\n"; printMatrix(A);
    cout << "Matrix B:\n"; printMatrix(B);

    Matrix C1 = naiveMultiply(A, B);
    Matrix C2 = strassenMultiply(A, B);

    cout << "Naive Result:\n"; printMatrix(C1);
    cout << "Strassen Result:\n"; printMatrix(C2);
}

int main() {
    testCase1();
    testCase2();
    testCase3();
    return 0;
}


