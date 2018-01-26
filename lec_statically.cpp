#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

void print_with_hyphens( vector<int> sequence )
{    for( auto it=sequence.begin(); it!=sequence.end(); ++it )
        cout << *it << "-"; cout << endl;
}

void print_with_hyphens( vector<float> sequence )
{    for( auto it=sequence.begin(); it!=sequence.end(); ++it )
        cout << *it << "-"; cout << endl;
}

int main()
{
    vector<int> v { 2, 4, 6, 8, 10, 12 };
    vector<float> f { 2.2, 4.4, 6.6, 8.8, 10.1, 12.12 };

    print_with_hyphens( v );
    print_with_hyphens( f );
}