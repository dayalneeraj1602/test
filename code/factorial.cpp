#include<iostream>
using namespace std;
int main()
{
    int factorial=1,n,i;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<n;i++){
    factorial*=i;
    }
    cout<<"value of factorial is "<<factorial;
    
}