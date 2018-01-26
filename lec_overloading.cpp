#include <string>
using namespace std;

// version 1
int add( int a, int b ) { return a + b; }

// version 2
string add( string a, string b ) { return a + b; }

// version 3
int add( int a, int b, int c ) { return a + b + c; }

int main()
{
    int i = add( 1, 2 );         // calls version 1
    string f = add( "Monty", "Python" ); // calls v2
    int j = add( 1, 2, 3 );      // calls version 3
}