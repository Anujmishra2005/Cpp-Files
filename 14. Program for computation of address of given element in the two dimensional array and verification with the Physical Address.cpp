#include <bits/stdc++.h>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;

    int arr[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int rowIndex = 1;
    int colIndex = 2;
    int* address = &arr[rowIndex][colIndex];

    cout << "Logical Address of arr[" << rowIndex << "][" << colIndex << "]: " << address << std::endl;
    cout << "Physical Address of arr[" << rowIndex << "][" << colIndex << "]: " << &arr[rowIndex][colIndex] << std::endl;

    return 0;
}
