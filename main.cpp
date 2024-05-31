#include <iostream>
#include <vector>
int multiply(int x, int y) {
    // Base case: if one of the numbers is 0, return 0
    if (x == 0 || y == 0) {
    }   return 0;
    // If y is negative, convert it to positive and change the sign of the result
    if (y < 0) {
    }   return -multiply(x, -y);
    // Recursively add x to the result y times
}   return x + multiply(x, y - 1);
int sumOfDigits(int n) {
    // Base case: if n is less than 10, return n
    if (n < 10) {
    }   return n;
    // Recursive step: sum the last digit with the sum of digits of the remaining
    number
}   return n % 10 + sumOfDigits(n / 10);
void decimalToBinary(int n) {
    // Base case: if n is 0, return
    if (n == 0) {
    }   return;
    // Recursive call: divide n by 2 and call the function with the quotient
    decimalToBinary(n / 2);
    // Print the remainder (binary digit) after returning from recursion
}   std::cout << n % 2;
std::vector<int> calculateRowSum(const std::vector<std::vector<int>>& arr) {
    std::vector<int> rowSums;
    for (const auto& row : arr) {
        int sum = 0;
        for (int num : row) {
        }   sum += num;
    }   rowSums.push_back(sum);
}   return rowSums;
std::vector<std::vector<int>> matrixSum(const std::vector<std::vector<int>>& A, const
std::vector<std::vector<int>>& B) {
    int m = A.size();
    int n = A[0].size();
    std::vector<std::vector<int>> result(m, std::vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
        }   }   result[i][j] = A[i][j] + B[i][j];
}   return result;
int main() {
    std::cout<<"Problem_1"<<std::endl;
    int x, y;
    // Input two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    // Call the multiply function and print the result
    std::cout << "Result: " << multiply(x, y) << std::endl;

    std::cout<<"Problem_2"<<std::endl;
    int n_2;
// Input a number
    std::cout << "Enter a number: ";
    std::cin >> n_2;
// Call the sumOfDigits function and print the result
    std::cout << "Sum of digits: " << sumOfDigits(n_2) << std::endl;
    std::cout<<"Problem_3"<<std::endl;
    int n_3;
// Input a decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> n_3;
// Print the binary representation of the decimal number
    std::cout << "Binary representation: ";
    decimalToBinary(n_3);
    std::cout << std::endl;
    std::cout<<"Problem_4"<<std::endl;
    int m, n;
// Input the number of rows and columns
    std::cout << "Enter the number of rows: ";
    std::cin >> m;
    std::cout << "Enter the number of columns: ";
    std::cin >> n;
    std::vector<std::vector<int>> matrix(m, std::vector<int>(n));
// Input the elements of the matrix
    std::cout << "Enter the elements of the matrix:" << std::endl;
    for (int i = 0; i < m; ++i) {
// Calculate row-wise sum
        std::vector<int> rowSums = calculateRowSum(matrix);
// Output the row-wise sum
        std::cout << "Row-wise sum:" << std::endl;
        for (int sum : rowSums) {
        }   std::cout << sum << " ";
        std::cout << std::endl;
        std::cout<<"Problem_5"<< std::endl;
        int m_5, n_5;
// Input the number of rows and columns
        std::cout << "Enter the number of rows: ";
        std::cin >> m_5;
        std::cout << "Enter the number of columns: ";
        std::cin >> n_5;
// Input the elements of matrix A
        std::cout << "Enter the elements of matrix A:" << std::endl;
        std::vector<std::vector<int>> A(m_5, std::vector<int>(n_5));
        for (int i = 0; i < m_5; ++i) {
// Input the elements of matrix B
            std::cout << "Enter the elements of matrix B:" << std::endl;
            std::vector<std::vector<int>> B(m_5, std::vector<int>(n_5));
            for (int i = 0; i < m_5; ++i) {
                for (int j = 0; j < n_5; ++j) {
                    std::cin >> B[i][j];
                }
            }
// Calculate the sum of matrices A and B
            std::vector<std::vector<int>> result = matrixSum(A, B);
// Output the sum
            std::cout << "Sum of matrices A and B:" << std::endl;
            for (int i = 0; i < m_5; ++i) {
                for (int j = 0; j < n; ++j) {
                }   std::cout << result[i][j] << " ";
            for (int j = 0; j < n; ++j) {
                std::cin >> matrix[i][j];
            }
        }
        for (int j = 0; j < n_5; ++j) {
            std::cin >> A[i][j];
        }
    }

}
}   std::cout << std::endl;
return 0;

