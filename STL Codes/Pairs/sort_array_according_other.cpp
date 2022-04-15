#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;

void givensort(int a[],int b[],int n){
    pair<int,char>pa[n];
    for(int i=0;i<n;i++)
    pa[i]={a[i],b[i]};
    sort(pa,pa+n);
    for(int i=0;i<n;i++)
    cout<<pa[i].second<<" ";
}
int main(){
    int a[]={3,1,2},b[]={'g','e','k'};
    int n=sizeof(a)/sizeof(a[0]);
    givensort(a,b,n);
    return 0;
}