#include<bits/stdc++.h>
using namespace std;

bool compare(int &t1,int &t2){
    return t1>t2;
}
int pick_min_coin(int coin[],int n,int amount){
    sort(coin,coin+n,compare);

    int res=0;

    for(int i=0;i<n;i++){
        if(coin[i]<=amount){
            int c=floor(amount/coin[i]);
            res+=c;
            amount-=c*coin[i];
        }
    }
    return res;
}
int main(){
    int coin[]={10,5,2,1};
    int n=4;
    int amount=52;
    cout<<pick_min_coin(coin,n,amount);

    return 0;
}