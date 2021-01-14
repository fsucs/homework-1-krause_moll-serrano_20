
/**
@mainpage COP 3330 Project 1

@author Marlee Krause and Francisco Moll-Serrano

PROJECT DESIGN
This project works by taking an inputted string and by analyzing 
it with the get_max_count() function returns the integer value for
the frequency of the most common character in the inputted string.

CONTRIBUTIONS
Both of us contributed equally to this project, we worked well 
together and had no clear contribution because everything imputed
was decided by both of us together.

STABILITY
we did not change the stability of this code when adding it to the 
Get_max_count function().

*/


#include <iostream>
#include <example.hpp> 
#include <assert.h>
#include <string>

int get_max_count(std::string sinput)
{
    int count,         // records frequency of current char
        Max_count = 0; // records frequency of the most frequent char
    char symbol;       // current char

    for (symbol = ' '; symbol <= '~'; symbol++) //all printable character codes
    {
        count = 0; //initialize counter
        for (int i = 0; i < sinput.length(); i++)
        { // Counting the most frequent char
            if (symbol == sinput[i])
                count++;
        }

        if (count > Max_count)
            Max_count = count;
    }
    return Max_count;
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
