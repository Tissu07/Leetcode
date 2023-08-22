// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<< endl;
}

void Selection(int arr[], int size){
    for(int i = 0; i<size; i++){
        int max = i;
        for(int j = i+1; j<size; j++){
            if(arr[j]<arr[i]){
                max = j;
            }
        }
        swap(&arr[i], &arr[max]);
    }
    print(arr,size);
}

int main() {
    
    int arr[5] = {20, 12, 10, 15, 2};
    int size = 5;
   
    print(arr, size);
    Selection(arr, 5);
    

    return 0;
}