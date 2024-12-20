#include<iostream>
using namespace std;
int checkPatients(int days, int patients);

int i=0,treated=0, doctors=7, unTreated, treatedPatient, unTreatedPatient;

main()
{
    int days, patients, result;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    for(int i=1; i<=days; i=i+1)
    {
        cout << "Number of patients who visited hospital on Day " << i << ":" ;
        cin >> patients;
        checkPatients(days, patients);
        
    }
}
// function that calculate how many  patients are treated and non-treated
// if patients in a day are more than 7 then 1 doctor will be hire.
int checkPatients(int days, int patients)
{
    
    if(patients<=doctors)
    {
        treatedPatient=patients;
        treated=treated+treatedPatient;
        
    }
    if(patients>doctors)
    {
        
        unTreatedPatient=patients-doctors;
        unTreated=unTreated+unTreatedPatient;
        
        treated=treated+doctors;   
        doctors=doctors+1;    
    }
    i++;
    if(i==days)
    {
        cout << "Treated patients: "<< treated << endl;
        cout << "Untreated Patient: " << unTreated;
    }
    
}