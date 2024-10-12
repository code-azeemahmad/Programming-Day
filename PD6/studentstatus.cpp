#include<iostream>
#include<sstream>
#include<string>
#include<iostream>
using namespace std;
string func(int starhours,int  startminutes, int arrivalhours, int arrivalminutes);
int hour, minutes, arrivalhours, arrivalminutes;
int main()
{
    
    cout<<"Enter Exam starting time (hour): ";
    cin>>hour;
    cout<<"Enter Exam starting time (minutes): ";
    cin>>minutes;
    cout<<"Enter Student hour of arrival: ";
    cin>>arrivalhours;
    cout<<"Enter Student minutes of arrival: ";
    cin>>arrivalminutes;
    string answer=func(hour, minutes, arrivalhours, arrivalminutes);
    cout<<answer;

    
} 
string func(int starthours,int  startminutes, int arrivalhours, int arrivalminutes)
{
    stringstream result;
    int inter1, inter2, inter3, inter4;
    inter1=abs(starthours-arrivalhours);
    inter2=abs(startminutes-arrivalminutes);
    inter3=60-arrivalminutes;
    inter4=inter3+startminutes;

    if (inter1>1 && startminutes>arrivalminutes)
    {
        result << "Early" << endl << inter1 <<":" << inter2 << " hours before the start";
    }
    if (inter1>1 && startminutes<arrivalminutes)
    {
        result << "Early" << endl << inter1 <<":" << inter2 << " hours before the start";
    }
    if (inter1==1 && startminutes>arrivalminutes)
    {
        result << "Early" << endl << inter2 << " minutes before the start";
    }
    if (inter1==1 && startminutes<arrivalminutes)
    {
        result << "Early" << endl <<inter4 << " minutes before the start";
    }
     if (starthours>arrivalhours && startminutes==arrivalminutes)
    {
        result << "Early" << endl <<inter1 << " hours before the start";
    }
    return result.str();


}