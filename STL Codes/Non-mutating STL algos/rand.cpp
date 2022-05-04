#include<iostream>
#include<time.h>
using namespace std;


int main(){
    srand(time(NULL));
    for(int i=0;i<5;i++)
    cout<<rand()%100<<endl; //random number from 0 to 99.

    int low=10,high=100;
    int range=high-low+1;
    for(int i=0;i<5;i++)
    cout<<(rand()%range)+low<<" "; //random number from low to high ....
    return 0;
}