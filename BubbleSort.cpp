#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n) {
    for (int i=0;i<n-1;++i) {
        bool swapped = false;
        for (int j =0; j<n-i-1;++j) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void printArray(int arr[], int size) {
    for (int i=0; i<size;++i)
        cout <<arr[i] << " ";
    cout <<endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " integers:\n";
    for (int i =0;i< n;++i)
        cin >>arr[i];

    cout << "\nOriginal array: ";
    printArray(arr,n);

    bubbleSort(arr,n);

    cout << "Sorted array: ";
    printArray(arr,n);

    return 0;
}



