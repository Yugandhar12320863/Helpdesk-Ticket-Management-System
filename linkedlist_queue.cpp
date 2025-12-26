#include <iostream>
using namespace std;
struct Node{int d;Node* n;};
int main(){Node *f=NULL,*r=NULL; int x; for(int i=0;i<3;i++){cin>>x; Node* t=new Node{x,NULL}; if(!r)f=r=t; else r->n=t,r=t;} while(f){cout<<f->d<<" "; f=f->n;} }
