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
    int i=0,j=c-1;

    while(i<r && j>=0){
        if(arr[i][j]==x){
            cout<<"found at "<<i<<','<<j;
            return 0;
        }
        else if(arr[i][j]>x)
            j--;   //  j decreasing to get smaller no.
        else
            i++; // i increasing to get greater no. 
    }
    cout<<"not found";
    return 0;
}   