#include<iostream>
using namespace std;

void merge(int m[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    int L[n1 + 1], R[n2 + 1];
    for (int i = 0; i < n1; i++)
        L[i] = m[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = m[q + 1 + j];

    int i = 0, j = 0, k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            m[k] = L[i];
            i++;
        } else {
            m[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        m[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        m[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int m[], int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;

        mergeSort(m, p, q);
        mergeSort(m, q + 1, r);

        merge(m, p, q, r);
    }
}

int main() {
    int size;
    cout << "Enter the Number of Elements that you want to store inside the array : ";
    cin >> size;
    int m[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter a number: ";
        cin >> m[i];
    }
    cout << "\n";
    cout << "The array elements are: ";
    for (int i = 0; i < size; i++) {
        cout << m[i] << " ";
    }

    mergeSort(m , 0, size - 1);
    cout << "\n";
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << m[i] << " ";
    }
    cout << "\n";
    return 0;
}
