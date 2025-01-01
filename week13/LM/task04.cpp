#include<iostream>
#include<fstream>
using namespace std;
void getStudentDetails(string names[], int ages[], float
matricMarks[], float fscMarks[], float ecatMarks[], int size, int
&count);
void saveToFile(string names[], int ages[], float matricMarks[],
float fscMarks[], float ecatMarks[], int count, string fileName);
main()
{
    const int size=10;
    int ages[size], count=0;
    string fileName="task04.txt";//file name
    string names[size], option="Yes";
    float matricMarks[size], fscMarks[size], ecatMarks[size];//declare arrays
    while(option=="Yes")
    {
        getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);//get data until ger 'No'
        saveToFile(names,ages, matricMarks,//save in file
        fscMarks, ecatMarks, count, fileName);
        cout << "Enter No to stop or Yes to Continue: ";
        cin >> option;
        count ++;//count ++ for store data
    }
}
void getStudentDetails(string names[], int ages[], float
matricMarks[], float fscMarks[], float ecatMarks[], int size, int
&count)
{
    cout << "Enter student's name: ";
    cin.ignore();
    getline(cin, names[count]);//with space
    cout << "Enter age: ";
    cin >> ages[count];
    cout << "Enter student's matric marks: ";
    cin >> matricMarks[count]; 
    cout << "Enter student's Fsc marks: ";
    cin >> fscMarks[count];
    cout << "Enter student's ECAT marks: ";
    cin >> ecatMarks[count];        
}
void saveToFile(string names[], int ages[], float matricMarks[],
float fscMarks[], float ecatMarks[], int count, string fileName)
{
    fstream file;
    file.open(fileName, ios::app);
    file << "Name: " << names[count] << endl;//store in file
    file << "Age: " << ages[count] << endl;
    file << "Matric Marks: " << matricMarks[count] << endl;
    file << "Fsc Marks: " << fscMarks[count] << endl;
    file << "Ecat marks: " << ecatMarks[count] << endl;
    file << endl;
    file.close();
}