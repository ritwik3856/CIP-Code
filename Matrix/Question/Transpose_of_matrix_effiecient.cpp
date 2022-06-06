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
        for(int j=i+1;j<c;j++){
            swap(arr[i][j],arr[j][i]); //swapping all the element with correspond to j,i . 
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}   