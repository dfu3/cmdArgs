#include <iomanip>
#include <iostream>
#include <string.h>
#include <typeinfo>
using namespace std;

int main( int argc, char* argv[] )
{
    string curr = "";
    for (int n = 1; n < argc; n++)
    {
        curr = argv[n];

        if (  curr.substr(curr.length()-1, 1) == "," )
        {
            cout << curr;
            if ( n < argc-1 )
                cout << " ";

        }
        else
        {
            cout << curr;
            if ( n < argc-1 )
                cout << ", ";
        }

    }


    return 0;
}