#include<bits/stdc++.h>
using namespace std;

struct mystack{
  vector<int> s;
  void push(int x){
      s.push_back(x);
  }
  int pop(){
      int res=s.back();
      s.pop_back();
      return res;
  }
  int peek(){
      return s.back();
  }
  int size(){
      return s.size();
  }
  int isEmpty(){
      return s.empty();
  }

};
int main(){
    mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}