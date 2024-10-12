#include<bits/stdc++.h>
using namespace std;
string retu(int a, int b, int c);

int main()

{
    int a, b, c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;
    string result;
    result=retu(a, b, c);
    cout<< result ;

}
string retu(int a, int b, int c)
{
    int d, e, f;
    d=a+1;
    e=b+1;
    f=c+1;
    stringstream answer;
    answer << "New value of a: " << d << endl << "New value of b: " << e << endl << "New value of c: " <<f;
    return answer.str();
}


/*                                  SYNTAX FOR RETURNING STRING CONTAINING VARIABLES

#include <iostream>
#include <sstream>  // Include for std::ostringstream
#include <string>   // Include for std::string
using namespace std;

// Function that returns a formatted string containing multiple variables
string formatVariables(int a, float b, const string &c) {
    ostringstream oss; // Create an output string stream
    oss << "Integer: " << a << ", Float: " << b << ", String: " << c; // Format the output
    return oss.str(); // Return the constructed string
}

int main() {
    int x = 10;
    float y = 3.14;
    string z = "Hello";

    // Call the function and get the formatted string
    string result = formatVariables(x, y, z);
    
    // Output the result
    cout << result << endl; // Output: Integer: 10, Float: 3.14, String: Hello

    return 0;
}

*/



/*

how to return string containing variables using <string> and namepsace std;
ChatGPT said:
ChatGPT
To return a string containing variables using <string> and using namespace std; in C++, you can utilize the std::string class along with string concatenation or string streams. Here's how you can do it with both methods:

Method 1: Using String Concatenation
You can concatenate strings using the + operator.

#include <iostream>
#include <string>   // Include the string header
using namespace std;

string createMessage(string name, int age) {
    return "Hello, " + name + "! You are " + to_string(age) + " years old."; // Return a formatted string
}

int main() {
    string name = "Alice";
    int age = 30;
    string message = createMessage(name, age);  // Call the function and store the result
    cout << message << endl;  // Output the message
    return 0;
}



Method 2: Using ostringstream
Alternatively, you can use std::ostringstream from the
<sstream> header to build the string. This method is particularly useful for formatting strings.

#include <iostream>
#include <string>
#include <sstream>  // Include the sstream header for ostringstream
using namespace std;

string createMessage(string name, int age) {
    ostringstream oss;  // Create an ostringstream object
    oss << "Hello, " << name << "! You are " << age << " years old.";  // Stream the formatted message
    return oss.str();  // Return the string
}

int main() {
    string name = "Bob";
    int age = 25;
    string message = createMessage(name, age);  // Call the function and store the result
    cout << message << endl;  // Output the message
    return 0;
}

Explanation:
String Concatenation:
Uses the + operator to join strings and convert the integer to a string using to_string().
Using ostringstream:
The ostringstream allows you to use the << operator to build the string, making it easier to format complex messages.
Both methods will produce output like:

Hello, Alice! You are 30 years old.

Hello, Bob! You are 25 years old.





Conclusion
For Simple Cases: If you are only combining a couple of strings or variables,
string concatenation is likely easier and perfectly reliable.
For Complex or Performance-Critical Cases: If you are building strings in a loop
or combining multiple variables (especially of different types), 
using ostringstream is more reliable and efficient.
Recommendation: If you’re just starting out or dealing
with simple string operations, go with string concatenation for its ease. 
As you grow in experience or face more complex scenarios, you can transition to using ostringstream.
*/