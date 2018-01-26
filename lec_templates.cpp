#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
using namespace std;

template<typename T>
void print_with_hyphens( T sequence )
{
    for( auto it=sequence.begin(); it!=sequence.end(); ++it )
        cout << *it << "-"; cout << endl;
}

int main()
{
    vector<int> v { 2, 4, 6, 8, 10, 12 };
    vector<float> f { 2.2, 4.4, 6.6, 8.8, 10.1, 12.12 };
    list<int> l { 2, 4, 6, 8, 10, 12 };
    list<string> s { "apple", "ball", "cat" };

    print_with_hyphens( v );
    print_with_hyphens( f );
    print_with_hyphens( l );
    print_with_hyphens( s );
}