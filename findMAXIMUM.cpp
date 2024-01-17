#include<iostream>
#include<limits.h>
using namespace std;

void Findmaximum(int arr[][3],int row,int col){

    int maxiAns = INT_MIN;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j] > maxiAns){
                maxiAns = arr[i][j];
            }
        }
    }
    cout<<maxiAns<<endl;
}

int main(){

    int arr[][3] =
    {
        {1,3,5},
        {10,400,80},
        {5,7,3}
    };

    int row = 3;
    int col = 3;

    Findmaximum(arr,row,col);
}