#include<iostream>
using namespace std;
int howmanystickers(int m);
int n,m;
main()
{
    cout<<"Enter the side lenth of rubiks cube: ";
    cin>>n;
    m=howmanystickers(n);

}
int howmanystickers(int n)
{
    if (n==1)
    {
        cout<<"Number of stickers needed: 6";
    }
    if (n==2)                                        
    {
        cout<<"Number of stickers needed: 24";
    }
    if (n==3)
    {
        cout<<"Number of stickers needed: 4";
    }
    if (n==4)
    {
        cout<<"Number of stickers needed: 96";
    }
    if (n==5)
    {
        cout<<"Number of stickers needed: 150";
    }
    if (n==6)
    {
        cout<<"Number of stickers needed: 216";
    }

    return 0;

}
/*
int howmanystickers(int n)
{
    switch (n)  // The value of n is checked
    {                                                       Consider switch: When you're checking for multiple specific values of a single variable,
                                                            as in this case, it's even more compact and readable.
                                                            +Switch evaluates a single expression (e.g., n), and based on its value,
                                                            control is passed to one of the labeled case blocks.
                                                            +Case specifies a constant value to compare against the switch expression.
                                                            When a match is found, the associated code block is executed.
                                                            +Default (optional) handles cases where no match is found among the case labels.
                                                            When to Use switch-case:
                                                            When comparing a single variable against multiple constant values (e.g., integers, characters).
                                                            It's often faster and cleaner than multiple if-else if chains in these scenarios.
                                                            CASE and DEFAUALT are built in commands.
        case 1:  // If n is 1
            return 6;  // Execute this code
        case 2:  // If n is 2
            return 24;  // Execute this code
        case 3:  // If n is 3
            return 54;  // Execute this code
        case 4:  // If n is 4
            return 96;  // Execute this code
        case 5:  // If n is 5
            return 150;  // Execute this code
        case 6:  // If n is 6
            return 216;  // Execute this code
        default:  // If none of the cases match
            return 0;  // Handle invalid values of n
    }
}
*/