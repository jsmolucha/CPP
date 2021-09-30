#include <iostream>
using namespace std;

int main(void) {
    int a, i=0;
    cout << "what table do you wanna see?";
    cin >> a;

   for (i=1; i < 10; i++) {
       cout << a << 'x' << i << "=" << a*i<<"\n" ;
   } 
}

