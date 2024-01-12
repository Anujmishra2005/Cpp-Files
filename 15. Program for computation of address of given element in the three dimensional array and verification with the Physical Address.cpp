#include <bits/stdc++.h>
using namespace std;

int main() {
    const int dim1 = 2;
    const int dim2 = 3;
    const int dim3 = 4;

    int arr[dim1][dim2][dim3] = {
        {{1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}},

        {{13, 14, 15, 16},
         {17, 18, 19, 20},
         {21, 22, 23, 24}}
    };
    int index1 = 1;
    int index2 = 2;
    int index3 = 3;

    int* address = &arr[index1][index2][index3];

    cout << "Logical Address of arr[" << index1 << "][" << index2 << "][" << index3 << "]: " << address << endl;
    cout << "Physical Address of arr[" << index1 << "][" << index2 << "][" << index3 << "]: " << &arr[index1][index2][index3] << endl;

    return 0;

    cout << "Memory Address Can't be Displayed over the limits so we can traverse it by using the address array traversion " << endl;
}
