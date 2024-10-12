#include<iostream>
#include<cmath>              //#include <bits/stdc++.h>
float power(float base);
using namespace std;
int main()
{
    float base,result;
    cout<<"Enter the number: ";
    cin>>base;
    result=power(base);
    cout<<"The square root of " << base <<" is: " << result;



}
float power(float base)
{
    float expo=sqrt(base);
    return expo;
}
/*Here’s a non-exhaustive list of some of the commonly included libraries when you use #include <bits/stdc++.h>:

Input/Output Streams

<iostream>
<iomanip>
<cstdio>
<cstdlib>
Containers

<vector>
<list>
<deque>
<set>
<map>
<unordered_set>
<unordered_map>
<stack>
<queue>
Algorithms

<algorithm>
<functional>
<numeric>
Iterators

<iterator>
Strings

<string>
<cstring>
Math Utilities

<cmath>
<cstdlib>
Others

<bitset>
<complex>
<valarray>
<limits>
<memory>
<utility>*/