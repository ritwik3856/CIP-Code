#include<iostream>
#include<queue>
using namespace std;

struct person{
    int age;
    float ht;
    person(int a,float h){
        age=a;
        ht=h;
    }
};
    struct mycmp{
        bool operator()(person const &p1 , person const &p2){
           return p1.ht<p2.ht;
        }
};
int main(){
    person p1(3,2),p2(4,5);
    priority_queue<person,vector<person>,mycmp>pq; //custom compare function in structure .
    return 0;
}