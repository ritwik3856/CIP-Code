#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>v={10,20,30,40,50,60,70};
  vector<int>::iterator i=v.begin();
  cout<<"Begin : "<<*i<<endl;
  i++;
  i=prev(i);
  cout<<"Prev after increment : "<<*i<<endl;
  i=next(i);
  cout<<"Next of the vector : "<<*i<<endl;
  i=next(i,2);
  cout<<"Next increment by 2 step ahead : "<<*i<<endl;
  advance(i,2);
  cout<<"advance on the vector 2 times ahead : "<<*i<<endl;
  i=v.end();
  i--;
  cout<<"End of the vector : "<<*i;

  return 0;
}
