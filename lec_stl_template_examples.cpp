#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    vector<int> v { 2, 4, 6, 8, 10, 12 };      // storing ints
    vector<float> f { 2.2, 4.4, 6.6 };         // storing floats

    list<int> l { 2, 4, 6, 8, 10, 12 };        // storing ints differently
    list<string> s { "apple", "ball", "cat" };

    pair<int,float> p { 123, 45.6f };          // double template

    vector< vector<int> > vv { { 1, 2, 3}, { 4, 5, 6 } }; // template in a template

    cout << max( 1, 99 ) << endl;            // same function, different input types
    cout << max( 'A', 'Z' ) << endl;

    return 0;
}