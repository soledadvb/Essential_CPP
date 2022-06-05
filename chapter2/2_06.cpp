#include <iostream>
#include <string>
using namespace std;

bool is_size_ok(int size)
{
    const int max_size = 1024;
    const string msg("Requested size is not supported");

    if( size <= 0 || size > max_size)
    {
        display_message(msg, size);
        return false;
    }
    return true;
}

const string greeting("Hello.Welcome to Guess the Numberic Sequence");

display_message(greeting);
const string seq("The two elements of the sequence are ");
display_message(seq, elem1, elem2);

display_message('\n');
display_message('\t');

ostream &display_message(char ch);
bool display_message(char ch);