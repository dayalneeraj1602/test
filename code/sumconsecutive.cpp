#include<iostream>
using namespace std;
int main()
{
    int sum=1,n,i;
    cout<<"enter the value of n";
    cin>>n;
    for(i=0;i<=n;i++){
    sum+=i;
    }
    cout<<"value of consecutive sum  is "<<sum;
    
}