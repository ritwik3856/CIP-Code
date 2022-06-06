#include<iostream>
#include<algorithm>
using namespace std;

const int r=3;
const int c=5;

int main(){
                                 
    int arr[r][c]={{5,10,20,30,40},         //row-wise sorted
                   {1,2 ,3 ,4 , 6},  
                   {11,13,15,17,19}};          
    int min=arr[0][0],max=arr[0][c-1];
    
    for(int i=1;i<r;i++){
        if(arr[i][0]<min){min=arr[i][0];}
        if(arr[i][c-1]>max){max=arr[i][c-1];}
    }
    int medPos=(r*c+1)/2;
    while(min<max){
        int mid=(min+max)/2;
        int midPos=0;
        for(int i=0;i<r;i++)
        midPos+=upper_bound(arr[i],arr[i]+c,mid)-arr[i];

        if(midPos<medPos)
        min=min+1;
        else
        max=mid;
    }
    cout<<min;
    return 0;
}   