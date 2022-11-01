#include<bits/stdc++.h>
using namespace std;

struct node{
    char ch;
    int freq;
    node *left,*right;

    node(char c,int f,node *l=NULL,node *r=NULL){
        ch=c;
        freq=f;
        left=l;
        right=r;
    }
};
struct compare{
    bool operator()(node *left,node *right){
        return left->freq>right->freq;
    }
};

void printCodes(node *root,string str){
    if(root->ch != '$'){
        cout<<root->ch<<" "<<str<<'\n';
        return;
    }
    printCodes(root->left,str+"0");
    printCodes(root->right,str+"1");
}

int main(){
    vector<pair<char,int>>v={{'a',30},{'d',40},{'f',60},{'e',80}};
    priority_queue<node*,vector<node*>,compare>h;

    for(int i=0;i<v.size();i++){
        h.push(new node(v[i].first,v[i].second));
    }

    // while(!h.empty()){
    //     cout<<h.top()->freq<<" "<<h.top()->ch<<'\n';
    //     h.pop();
    // }

    
    while(h.size()>1){
        node *l=h.top();h.pop();
        node *r=h.top();h.pop();

        node *top=new node('$',l->freq+r->freq,l,r);
        h.push(top);
    }

    printCodes(h.top()," ");

    return 0;
}