#include<iostream>
using namespace std;

void colwisesum(int arr[][3],int row,int col){
   
    for(int i=0; i<col; i++){
         int sum = 0;

        for(int j=0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<"sum of col is "<<i<<" "<<sum<<endl;
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
    colwisesum(arr,row,col);
}