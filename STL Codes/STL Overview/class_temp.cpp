#include<iostream>
using namespace std;

template<typename T>
class Pair{
    public:
    T x;
    T y;
    Pair(T i,T j){
        x=i;
        y=j;
    }
    T getFirst();
    T getSecond(){
        return y;
    }
};

template<typename T>
Pair<T>::getFirst(T){  //trying to write the member function outside the class in a template.
    return x;
}

int main(){
    Pair<int>p1(10,20);
    cout<<p1.getFirst()<<" "<<p1.getSecond();
    return 0;
}
