/**
@mainpage COP 3330 Project 1

@author Francisco Moll-Serrano and Marlee Krause

PROJECT DESIGN
 This project works by taking an inputted string and by analyzing it with the get_max_count() function
it returns the integer value for the frequency of the most common character in the inputted string.

CONTRIBUTIONS
 There was equal contributions to the project, as every part of it was done together.

STABILITY
 We did not change the stability of the code when adding a body to the get_max_count() function.

 This project returns the integer value of how many times the most frequent character
in an inputted string (sinput) appears. It does this by cycling through every character
in the ASCII library. Every ASCII cycle, every character in sinput is checked for a match.
After tallying all the matches, it is recorded to a total, and the running count is reset.
Every time the running count exceeds the current recorded max count, the max count is overwritten.
After every ASCII character has been cycled once, the function get_max_count() returns the value
of the max count.
*/

#include <iostream>
#include <example.hpp>
#include <assert.h>
#include <string>

int get_max_count(std::string sinput)
{
    int count = 0;                                  // Hols the running count of the current character
    int max_count = 0;                              // Holds the number of most frequently used character

    for(char symbol = ' '; symbol <= '~'; symbol++) // Cycles through every character in the ASCII range
    {
        count = 0;                                  // Resets the counter
        for(int i = 0; i < sinput.length(); i++)    // Cycles though each letter of sinput
        {
            if(sinput[i] == symbol)
            {
                count++;
            }
        }
        if(count > max_count)
        {
            max_count = count;
        }
    }
    return max_count;
}

int main(int argc, char *argv[])
{
    using namespace std;
    
    if (argc >= 2)
    {
        string test1("c++");
        assert(get_max_count(test1) == 2);
    }
    else
    {
        string line;
        cout << "Please input a string: ";
        getline(cin, line);
        cout << get_max_count(line) << endl;
    }
	return 0;
}
