/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int func(int num) {
   int i;
   int flag = 1;
   for(i = 2; i <= num/2; ++i) {
      if(num % i == 0) {
         flag = 0;
         break;
      }
   }
   return flag;
}
int main() {
   int num , i;
   cout << "Enter a number : \n";
   cin >> num;
   for(i = 2; i <= num/2; ++i) {
      if (func(i)) {
         if (func(num - i)) {
            cout << num << " = " << i << " + " << num-i << endl;
         }
      }
   }
   return 0;
}