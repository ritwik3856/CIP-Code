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
    int temp[r][c];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            temp[i][j]=arr[j][i];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<temp[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}   