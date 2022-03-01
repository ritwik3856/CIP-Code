 #include<bits/stdc++.h>
using namespace std;

struct interval{
    int s,e;
};
bool mycmp(interval a,interval b){
      return a.s<b.s; }
void merge_overlapping(interval arr[],int n){
    sort(arr,arr+n,mycmp);
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[res].e>=arr[i].s){
            arr[res].s=min(arr[res].s,arr[i].s);
            arr[res].e=max(arr[res].e,arr[i].e);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++){
        cout<<"["<<arr[i].s<<","<<arr[i].e<<"]";
    }


}

int main() {
    interval arr1[]={ {5,10}, {3,15}, {18,30}, {2,7} };
    int n=sizeof(arr1)/sizeof(arr1[0]);
   merge_overlapping(arr1,n);
    return 0;
} 
