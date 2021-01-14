Getting Started
===============

This project returns the integer value of how many times the most frequent character
in an inputted string (sinput) appears. It does this by cycling through every character
in the ASCII library. Every ASCII cycle, every character in sinput is checked for a match.
After tallying all the matches, it is recorded to a total, and the running count is reset.
Every time the running count exceeds the current recorded max count, the max count is overwritten.
After every ASCII character has been cycled once, the function get_max_count() returns the value
of the max count.

Installation and RUN
====================
 1.) make all
 2.)./bin/main
