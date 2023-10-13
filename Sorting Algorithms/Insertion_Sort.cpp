#include<bits/stdc++.h>
using namespace std;
// void insertionSort(int arr[],int n){
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>0&&arr[j-1]>arr[j]){
//             int temp=arr[j];
//             arr[j]=arr[j-1];
//             arr[j-1]=temp;
//             j--;
//         }
//     }
// }
void insertionSort(int arr[],int n,int i=1){
    if(i==n) return;
    int j=i;
    while(j>0&&arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);
        j--;
    }
    insertionSort(arr,n,i+1);
 }

int main() {
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array Elements:";
    for(int i=0;i<n;i++) cin>>arr[i];
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}