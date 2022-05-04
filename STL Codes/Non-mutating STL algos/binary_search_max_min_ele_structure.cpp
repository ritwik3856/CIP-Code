#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

struct point{
    int x,y;
    point(int i,int j){
        x=i;
        y=j;
    }
};
bool mycmp(point p1,point p2){
    return p1.x < p2.x;
}
int main(){
    vector<point>v={{5,4},{2,300},{90,10}};
    auto it=max_element(v.begin(),v.end(),mycmp);
    cout<<((*it).x)<<" "<<it->y<<endl;
    auto it2=min_element(v.begin(),v.end(),mycmp);
    cout<<((*it2).x)<<" "<<it2->y<<endl;
    sort(v.begin(),v.end(),mycmp);
    point p(3,99);
   if(binary_search(v.begin(),v.end(),p,mycmp))
    cout<<"found";
    else
    cout<<"not found";
}