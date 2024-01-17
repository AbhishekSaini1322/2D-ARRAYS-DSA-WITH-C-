#include<iostream>
using namespace std;

int Dignoalprint(int arr[][3],int row,int col)
{
    int sum = 0;
    for(int i=0; i<row; i++){
       sum += arr[i][i];
    }

    return sum;
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
    cout<< Dignoalprint(arr,row,col);


}