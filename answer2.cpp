#include<bits/stdc++.h>
using namespace std;
long long factorial(int m){
    long long count=1;
    if(m==0){
        return 0;
    }
    for(int i=1;i<=m;i++){
        count=count*i;
    }
    return count;
}
int main()
{
int n;cin>>n;
char a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
int m;
long long count=0;
string s;cin>>s;
for(int i=0;i<s.size();i++){
   int sum=0;  m=n-i-1;
 for(int j=0;j<n;j++)
 { if(a[j]==s[i]){ a[j]=',';break;}

 else if(a[j]!=s[i]&&a[j]!=','){sum++;}

 }
 count=count+factorial(m)*sum;

}
 cout<<count+1;
}
