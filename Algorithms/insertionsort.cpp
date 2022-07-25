#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int size){
    for(int i=1; i<size; i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>=key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
}

int main(){
    int A[6] = {5,2,4,1,3,6};
    insertion_sort(A,6);
    for(int i=0; i<6;i++){
        cout << A[i];
    }
}
