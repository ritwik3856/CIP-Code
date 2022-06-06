#include<iostream>
using namespace std;

const int r=4;
const int c=4;

int main(){
                                 
    int arr[r][c]={{10,20,30,40},         
                   {15,25,35,45},  
                   {27,29,37,48},
                   {32,33,39,50}};          
    int x=29;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
        if(arr[i][j]==x){
        cout<<"found at "<<i<<','<<j;
        return 0;
        }
    }
    cout<<"not found";

    return 0;
}   