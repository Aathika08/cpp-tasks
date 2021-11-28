/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
int i=0;
int*p;
int arr[5];
p=arr;
cout<<"Enter elements:";
for(i=0;i<5;++i)
cin>>p[i];
cout<<"You entered:";
for(i=0;i<5;++i)
cout<<*(p+i)<<endl;
    return 0;
    
}
