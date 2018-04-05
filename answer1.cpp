#include<bits/stdc++.h>
using namespace std;
struct node{
char data;
node*left;
node*right;
}
int main()
{
   string a;
   cin>>a;  int n=a.size();
   stack<node*>s;
     int i=0;
     node*root=NULL;

    while(i<n){
    if(a[i]=='{'&&a[i+1]!='}'){
    node*temp=new node();
    temp->data=s[i+1];
    temp->left=NULL;temp->right=NULL;
    s.push(temp);
    i=i+3;
    }
   if(a[i]!=','&&a[i]!='}'){
    if(a[i]=='0'){ if(a[i+2]!='}'&&a[i+2]!=','&&a[i+2]!='0'){

    } }
   }

    }


    }
