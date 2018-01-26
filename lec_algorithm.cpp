#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v { 8, 4, 12, 2, 10, 6 };
    list<int> l { 8, 4, 12, 2, 10, 6 };

    sort( l.begin(), l.end() );

    if( find( l.begin(), l.end(), 6 ) != l.end() )
        cout << "Found a match" << endl;

    if( find( v.begin(), v.end(), 42 ) == v.end() )
        cout << "Did not find a match" << endl;

    return 0;
}