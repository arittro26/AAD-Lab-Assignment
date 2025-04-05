#include <iostream>
using namespace std;
int partition(int arr[],int low,int high) {
    int piv=arr[high];
    int i=low-1;
    for (int j=low;j<high;j++) {
        if (arr[j]<piv) {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[high]);
    return i+1;
}
void quickSort(int arr[],int low,int high) {
    if (low<high) {

        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
void printArray(int arr[], int size) {
    for (int i=0; i <size;i++) {
        cout <<arr[i]<< " ";
    }
    cout <<endl;
}

int main() {
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements of array: ";
    for (int i =0; i<size;i++) {
        cin >>arr[i];
    }

    quickSort(arr,0,size-1);

    cout << "Sorted array: ";
    printArray(arr,size);

    return 0;
}


