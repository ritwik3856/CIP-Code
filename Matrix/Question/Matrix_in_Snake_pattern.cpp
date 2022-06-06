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
   

    for(int i=0;i<r;i++){
       if(i%2==0){ 
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<" ";
       }
       else {
           for(int j=c-1;j>=0;j--)
                cout<<arr[i][j]<<" ";
       }
       cout<<'\n';
    }

    return 0;
}   