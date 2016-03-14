/*
   This code can be compiled and run ok.

   This code reads in an integer and print out the corresponding
   sequence of numbers following:
   (1)input n
   (2)print n
   (3)if n = 1 then STOP
   (4)if n is odd  n ¡ = 3n + 1
      else         n ¡ = n/2
   (5)GOTO 2

   coded by Chia-Ying,Wu, ID: H34046018, email: ying33119@mail.ncku.edu.tw
   date: 2016.03.14
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n << " ";

    while(n!=1){
        if(n%2==1)
            n = n*3 + 1;
        else
            n = n / 2;
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
