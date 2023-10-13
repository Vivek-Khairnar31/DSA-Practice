#include <bits/stdc++.h>
using namespace std;

//Note: when we pass 2D array as parameter the we need to specify the no. of columns
bool isPresent(int arr[][4],int target,int row,int col){
       for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
   int arr[3][4];
    // int arr[3][4] = {1,2,3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };// 3 shows the row and 4 shows the column
    // int  arr[3][4] ={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
    // cout << "Enter the elements of array";
    // taking input in 2D array "ROW" wise
    for (int i = 0; i < 3; i++)
    { // this loop for rows
        for (int j = 0; j < 4; j++)
        {                     // this loop for columns
            cin >> arr[i][j]; // this how take input in 2D array
        }
    }
    // this ho it takes input row wise
    //  1 2 3 4
    //  5 6 7 8
    //  9 10 11 12



    // taking input in 2D array "COLUMN" wise
    // for (int i = 0; i < 4; i++)
    // { // this loop for rows
    //     for (int j = 0; j < 3; j++)
    //     {                     // this loop for columns
    //         cin >> arr[j][i]; // this how take input in 2D array
    //     }
    // }
    //this is how it takes input col wise
    // 1 4 7 10
    // 2 5 8 11
    // 3 6 9 12

    // Here how to print 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Enter the target:";
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)==true){
    cout<<"Element is present!!";
   }else{
    cout<<"Not Found!!";
   }   

    return 0;
}