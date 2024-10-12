#include<iostream>
using namespace std;
int sub(int c, int d);
int main()
{

int a, b, diff;
cout<<"Enter your position: ";
cin>>a;
cout<<"Enter your Friend's position: ";
cin>>b;
diff=sub(a,b);

if (diff <= 6)
{
    cout<<"True";
}
else
{
    cout<<"False";
}

}
int sub(int c, int d)
{
int result=d-c;
return result;
}