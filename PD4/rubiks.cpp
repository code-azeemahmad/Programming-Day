#include<iostream>
using namespace std;
int howmanystickers(int n);                                    /*Use if when you have a single condition.
                                                                 Use if-else for binary choices (true/false).
                                                                 Use if-else if for multiple conditions on the same variable.
                                                                 Use switch for a variable with many possible discrete values.*/
int main()
{
    int n,m;
    cout<<"Enter the side lenths of rubiks cube: ";
    cin>>n;
    m=howmanystickers(n);
    cout<<"Number of stickers needed: " << m;
    return 0;

}
int howmanystickers(int n)
{
    if (n==1) return 6;              /*When you use plain if statements one after the other,
                                      each condition is checked regardless of whether a previous
                                      one has already been satisfied. This can result in unnecessary
                                      checks, especially when conditions are mutually exclusive.
                                      else if, on the other hand, will stop checking further conditions
                                      once a true condition is found. This reduces the number of comparisons
                                      and improves efficiency.*/
    else if (n==2) return 24;
    else if (n==3) return 54;        /*We use parenthesis after "else if" and not after "else" and 
                                      we dont use curly brackets around return*/
    else if (n==4) return 96;
    else if (n==5) return 150;
    else if (n==6) return 216;
    else return 0;    // Return 0 if the side length doesn't match any case

}
