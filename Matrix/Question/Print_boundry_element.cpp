#include<iostream>
using namespace std;

const int r=4;
const int c=4;
int main(){

    int arr[r][c]={{1,2,  3, 4 },
                   {5,6,  7 ,8 },
                   {9,10, 11,12},
                   {13,14,15,16},
                   };
    if(r==1)
    for(int i=0;i<c;i++)
    cout<<arr[0][i]<<" ";

    else if(c==1)
    for(int i=0;i<r;i++)
    cout<<arr[i][0]<<" ";

    else {
    for(int j=0;j<c;j++) //printing the top left to right
    cout<<arr[0][j]<<" ";

    for(int i=1;i<r;i++) //printing top last to bottom last
    cout<<arr[i][c-1]<<" ";

    for(int j=c-2;j>=0;j--) //printing last right to left 
    cout<<arr[r-1][j]<<" ";

    for(int i=r-2;i>0;i--) //printing last right to first right
    cout<<arr[i][0]<<" ";
    }
    return 0;
}   