#include<bits/stdc++.h>
using namespace std;
void printRowSum(int arr[][3] , int row ,int col){
    int maxi=0;
    int rowIndex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
       maxi=max(sum,maxi);
       rowIndex=row;
       
    }
    cout<<endl;
    cout<<maxi<<endl;
    cout<<rowIndex;

}

void printColSum(int arr[][3], int row,int col){
    int maxi=0;
    int colIndex=-1;
    for(int col=0;col<3;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
        maxi=max(maxi,sum);
        colIndex=col;
    }
    cout<<endl;
    cout<<maxi<<endl;
    cout<<colIndex;
}
int main() {
    int arr[3][3];
    cout<<"Enter the elements:";
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    cout<<"Printing the element:"<<endl;

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing row wise sum:"<<endl;
    printRowSum(arr,3,3);
    cout<<endl;
    cout<<"Printing Col wise sum:"<<endl;
    printColSum(arr,3,3);

    return 0;
}