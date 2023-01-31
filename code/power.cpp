#include<iostream>
using namespace std;
int power()

{ int a,b,ans=1;
  cin>>a>>b;
  for(int i=1;i<=b;i++){
   ans=ans*a;}
   return ans;
}
    int main()
    {
    int a;
    int ans=power();
    cout<<"Answer is "<<ans;
return 0;}

