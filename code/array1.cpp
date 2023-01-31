#include<iostream>
using namespace std;
void printArray(int arr[],int size){
for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl<<"printing done"<<endl;
}
int main()

{
    int arr[15]={1,2,3,5,1,5,8};
    printArray(arr,4);
    int first[]={0};
    printArray(first,10);
}