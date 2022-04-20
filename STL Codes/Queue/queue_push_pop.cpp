#include<iostream>
#include<queue>
using namespace std;


int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<q.front()<<" "<<q.back();
    cout<<endl;
    while(q.empty()==false){
        cout<<q.front()<<" "<<q.back();
        cout<<endl;
        q.pop();
    }
    return 0;
}