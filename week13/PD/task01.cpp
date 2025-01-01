#include<iostream>
#include<fstream>
using namespace std;
void separate(string line, string &name,int &age);
void getBirthdayCake(string name,int age);
main()
{
    int age;
    string name, line;
    fstream file;
    file.open("task01.txt", ios::in);
    file >> line;
    file.close();
    separate(line, name, age);
    getBirthdayCake(name, age);
}
void getBirthdayCake(string name,int age)
{
    if(age%2==0)
    {
        cout << "###############" << endl;//to print in special syntax
        cout << "# " << age << " HB " << name << "! " << age << " #" << endl;
        cout << "###############" << endl;
    }
    else
    {
        cout << "***************" << endl;//if age odd then * use otherwise#
        cout << "* " << age << " HB " << name << "! " << age << " *" << endl;
        cout << "***************" << endl;
    }
}
void separate(string line, string &name,int &age)
{
    string age1;
    int length=line.length();
    for(int i=0; i<length; i++)
    {
        if(line[i]!=',')
        {
            name=name+line[i];//get name
        }
        else//when found ','
        {
            cout << name << endl;
            for(int j=i+1; j<length; j++)
            {
                
                age1=age1+line[j];//get age
            }
            age=stoi(age1);
            cout << age << endl;
            return;
        }
    }
}