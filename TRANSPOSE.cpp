#include<iostream>
using namespace std;

void Transpose(int arr[][3],int row,int col){
    for(int i=0; i<row; i++){
        cout<<endl;
        for(int j=i; j<col; j++){
            swap(arr[i][j] , arr[j][i]);
        }
       
    }
}

void print(int arr[][3],int row,int col){
    for(int i=0; i<row; i++){
        cout<<endl;
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

int main(){
    int arr[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int row = 3;
    int col = 3;
    Transpose(arr,row,col);
    print(arr,row,col);
}