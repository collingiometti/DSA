#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int item, int low, int high){
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==item){
            return mid;
        } else if (arr[mid]<item){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int A[5] = {1,3,5,7,10};
    cout << binary_search(A,6,0,4);
}
