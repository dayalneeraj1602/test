#include<iostream>
using namespace std;
int main()
{int i;
int marks[6];
for(int i=0;i<6;i++){
    cout<<"enter the marks of "<<i<<" th stident"<<endl;
    cin>>marks[i];
}
for(int i=0;i<6;i++){
    cout<<"marks of "<<i<<" th student is "<<marks[i]<<endl;}
    return 0;
}