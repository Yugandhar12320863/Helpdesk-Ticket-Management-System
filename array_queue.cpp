#include <iostream>
using namespace std;
#define MAX 5
int q[MAX], f=-1, r=-1;
int main(){ int x; for(int i=0;i<3;i++){cin>>x; if(f==-1)f=0; q[++r]=x;} for(int i=f;i<=r;i++) cout<<q[i]<<" "; }
