#include<iostream>
using namespace std;
int main()
{
    int n,i,se;
    int a=0,b=1;
    cin>>n;
    for(i=0;i<=n;i++){
        se=a+b;
        cout<<se<<" ";
        a=b;
        b=se;
       
    }
}