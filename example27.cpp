#include <iostream>
using namespace std;
// One namespace
namespace NameA{
    void FunctionA(){
        cout << "This is namespace A " << endl;
    }
}
 // Second namespace
namespace NameB{
    void FunctionA(){
        cout << "This is namespace B " << endl;
    }
}
 int main () {
 // Calls function from first name space.
    NameA::FunctionA();
 // Calls function from second name space.
    NameB::FunctionA();
 return 0;
}

