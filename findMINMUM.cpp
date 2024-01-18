#include<iostream>
#include<limits.h>
using namespace std;

void Findminimum(int arr[][3],int row,int col){

    int minAns = INT_MAX;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] < minAns){
                minAns = arr[i][j];
            }
        }
    }
    cout<<minAns<<endl;
}

int main(){

    int arr[][3] =
    {
        {1,3,5},
        {10,-400,80},
        {5,7,3}
    };

    int row = 3;
    int col = 3;

    Findminimum(arr,row,col);
}