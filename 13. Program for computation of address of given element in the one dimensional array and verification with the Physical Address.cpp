#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = 2;
    int* address = arr + index;
    cout << "Logical Address of arr[" << index << "]: " << address << std::endl;
    cout << "Physical Address of arr[" << index << "]: " << &arr[index] << std::endl;
    return 0;
}
