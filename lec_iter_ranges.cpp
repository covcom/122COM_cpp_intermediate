#include <iostream>
#include <vector>
#include <list>
using namespace std;

template<typename ITER>
void print_with_hyphens( ITER begin, ITER end )
{    for( ITER it=begin; it!=end; it=next(it) )
        cout << *it << "-";
    cout << endl;
}

int main()
{    vector<int> v { 2, 4, 6, 8, 10, 12 };
    list<int> l { 2, 4, 6, 8, 10, 12 };

    // print the entire sequence regardless of container type
    print_with_hyphens( v.begin(), v.end() );
    print_with_hyphens( l.begin(), l.end() );

    // print the first half of the sequence
    print_with_hyphens( v.begin(), next( v.begin(), v.size()/2 ) );

    // print the sequence in reverse order. rbegin returns a reverse iterator
    print_with_hyphens( v.rbegin(), v.rend() );

    return 0;
}