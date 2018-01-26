#include <iostream>
#include <string>
#include <vector>
using namespace std;

int add( int a, int b ) { return a + b; }

unsigned int add( unsigned int a, unsigned int b )
{
    return a + b;
}

float add( float a, float b ) {    return a + b; }

char add( char a, char b ) { return a + b; }

string add( string a, string b ) { return a + b; }

vector<int> add( vector<int> a, vector<int> b )
{
    a.insert( a.begin(), b.begin(), b.end() );
    return a;
}

int main()
{
    int i = add( -1, 2 );
    unsigned int ui = add( 1, 2 );
    float f = add( 1.1f, 2.2f );
    char c = add( 'A', '3' );
    string s = add( "Monty", "C++" );
    vector<int> v = add( vector<int>{1,2,3}, vector<int>{4,5,6} );

    cout << i << " " << ui << " " << f << " " << c << " " << s << " ";
    for( int i : v ) cout << i << ", "; cout << endl;
}