#include<iostream>
using namespace std;
int main()
{ int i,j;
    int arr2d[2][3] = {
        {1,2,3},
        {2,3,1},
    };
    for (int i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
           cout<<"the value of "<<arr2d[i][j];
        }
        
    }
    
}