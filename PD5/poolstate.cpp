#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string calculatepoolstate(float V, float P1, float P2, float H);
int main()
{
    float V, P1, P2, H;
    cout << "Enter the volume of pool in litres: ";
    cin >> V;
    cout << "Enter the flow rate of first pipe per hour: ";
    cin >> P1;
    cout << "Enter the flow rate of second pipe per hour: ";
    cin >> P2;
    cout << "Enter the hours that the worker is absent: ";
    cin >> H;
    string result;
    result = calculatepoolstate(V, P1, P2, H);
    cout << result;

    return 0;
}
string calculatepoolstate(float V, float P1, float P2, float H)
{
    float pool, pipe1, pipe2, overflow;
    float contribution_of_first_pipe = P1 * H;
    float contribution_of_second_pipe = P2 * H;
    float total_contribution = contribution_of_second_pipe + contribution_of_first_pipe;
    pipe1 = (contribution_of_first_pipe / total_contribution) * 100;
    pipe2 = (contribution_of_second_pipe / total_contribution) * 100;
    pool = (total_contribution / V) * 100;
    overflow = total_contribution - V;

    stringstream answer;

    if (pool < V)
    {
        answer << "The pool is " << pool << "% full " << "Pipe 1: " << pipe1 << "%. " << "Pipe 2: " << pipe2 << "%. ";
    }
    else
    {
        answer << "For " << H << " hours, the pool overflows with " << overflow << " litres.";
    }
    return answer.str();
}





/*the header file <bits/stdc++.h> includes both <stream> and <sstream>
 as part of its collection of commonly used C++ standard library headers.*/



 /*
 
 Difference Between <string> and <sstream>
The <string> and <sstream> headers in C++ serve different purposes, even though they are related to string handling. Here’s a breakdown of their differences:

<string>
Purpose: The <string> header defines the string class, which is a part of the C++ Standard Library for manipulating sequences of characters.
Functionality:
Provides a dynamic, resizable string class that can handle character data.
Offers numerous member functions for string manipulation, such as concatenation, substring extraction, searching, replacing, and more.
Usage:
Used primarily for storing and manipulating text.
Example:

cpp
Copy code
#include <string>
using namespace std;

string str = "Hello, World!";
str += " Welcome!"; // Concatenation
cout << str.length(); // Length of the string
<sstream>
Purpose: The <sstream> header provides classes for string streams, specifically stringstream, istringstream, and ostringstream. These are used for input and output operations on strings.
Functionality:
ostringstream: For output operations, allows writing data to a string.
istringstream: For input operations, allows reading data from a string.
stringstream: Combines both input and output operations on strings.
Usage:
Used primarily for converting between strings and other data types (e.g., reading numbers from a string or writing formatted data to a string).
Example:

cpp
Copy code
#include <sstream>
using namespace std;

ostringstream oss;
oss << "The answer is: " << 42; // Writing to a string stream
string result = oss.str(); // Convert to string
cout << result; // Output: The answer is: 42

istringstream iss("42 3.14");
int intValue;
float floatValue;
iss >> intValue >> floatValue; // Reading from a string stream
Summary of Differences
Feature	<string>	<sstream>
Purpose	Defines the string class for manipulating strings.	Provides string stream classes for I/O operations.
Main Class	string	ostringstream, istringstream, stringstream
Usage	Text manipulation and storage.	Converting between strings and other types.
Member Functions	Length, concatenation, searching, etc.	Stream-like operations (input/output).
Conclusion
Use <string> when you need to manipulate strings directly.
Use <sstream> when you need to perform formatted input/output with strings or convert between strings and other data types.
 
 */