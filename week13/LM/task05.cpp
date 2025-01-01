#include<iostream>
#include<fstream>
using namespace std;
void getStudentDetails(string names[], int adNumbers[], float
percentages[], int size, int &count, string fileName);
main()
{
    const int size=10;
    int count=0;
    string fileName="task05.txt", names[size];//store file name
    int adNumbers[size];
    float percentages[size];
    getStudentDetails(names, adNumbers, percentages, size, count, fileName);//get details
}
void getStudentDetails(string names[], int adNumbers[], float
percentages[], int size, int &count, string fileName)
{
    fstream fileInput;
    fstream fileOutput;
    fileInput.open(fileName, ios::in);//read data from file
    fileOutput.open("topperStudents.txt", ios::out);//file to write
    while (fileInput >> names[count] >> adNumbers[count] >> percentages[count])
    {
            
            if(percentages[count]>70)//if percentage > 70 then write
            {
                
                fileOutput << "Name: " << names[count] << endl;
                fileOutput << "Admission Number: " << adNumbers[count] << endl;
                fileOutput << "Percentage: " << percentages[count] << endl;
                fileOutput << endl;
                
            }
        
        count++;
    }
    fileInput.close();
    fileOutput.close();
}