#include<iostream>
#include<algorithm>
using namespace std;


struct point{
    int x;
    int y;
};
bool mycmp(point p1, point p2){
    return p1.x<p2.x;
}
int main(){
    point arr[]={{2,8},{3,10},{5,4}};
    sort(arr,arr+3,mycmp);
    for(auto i:arr)
    cout<<i.x<<" "<<i.y<<endl;
    return 0;
}