// ******HOSPITAL MANAGEMENT*****

/*

You are required to implement a simplified hospital management system in c++ to manage
   patients, doctors, and their appointments. The system should allows adding new
   patients and doctors, scheduling appointments, and viewing the details of patients
   , doctors, and scheduled appointments.

   1. Add Patient -> Name , Age ,Gender, Id ->Beacuse the name can be identical
   2. Add Doctor -> Name , Age ,Gender, Id ->Beacuse the name can be identical
   3. Schedule Appointment -> Patient Id, Doctor Id, Date
   4. View patients -> Print all the Patients -> Store them
   5. View Doctors -> Print all the Doctor -> Store them
   6. View Appointments -> Print all the Appointements -> Store them
   0. Exit 

   Patient -> name age gender


*/



#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int pid;
int did;
class Patient{
    public:
    string name;
    string gender;
    int age;
    int ID;
    Patient(string n , int a, string g){
        ID =pid;
        pid++;
        name=n;
        age=a;
        gender=g;
    }
};
class Doctor{
    public:
    string name;
    string gender;
    int age;
    int ID;
    Doctor(string n , int a, string g){
        ID =did;
        did++;
        name=n;
        age=a;
        gender=g;
    }

};
class Apointmenet{
    public:
    int patientId;
    int doctorId;
    string Date;

    Apointmenet(int p, int d, string date){
        Date=date;
        patientId=p;
        doctorId=d;
    }
    
};

vector<Patient> allPatients;
vector<Doctor> allDoctor;
vector<Apointmenet> allAppointements;

bool isPatientpresent(int id){
    bool ans=false;
    for(int i=0; i<allPatients.size(); i++){
        if(allPatients[i].ID==id){
            ans=true;
        }
    }
    return false;
}

bool isDoctorpresent(int id){
    bool ans=false;
    for(int i=0; i<allDoctor.size(); i++){
        if(allDoctor[i].ID==id){
            ans=true;
        }
    }
    return false;
}

void addPatient(){
    string n,g;
    int a;
    cout<<"Give the name Patient"<<endl;
    cin>>n;
    cout<<"Give the name Age"<<endl;
    cin>>a;
    cout<<"Give the name Gender"<<endl;
    cin>>g;
    Patient temp(n,a,g);
    allPatients.push_back(temp);
}
void addDoctor(){
    string n,g;
    int a;
    cout<<"Give the Doctor name "<<endl;
    cin>>n;
    cout<<"Give the Doctor Age "<<endl;
    cin>>a;
    cout<<"Give the Doctor Gender "<<endl;
    cin>>g;
    Doctor temp(n,a,g);
    allDoctor.push_back(temp);

}
void ScheduleAppointment(){
    int patientId;
    int doctorId;
    string Date;
    cout<<"Give the Patient Id :"<<endl;
    cin>>patientId;
    cout<<"Give the Doctor Id :"<<endl;
    cin>>doctorId;
    cout<<"Give the Date in DD-MM-YYYY:"<<endl;
    cin>>Date;

    if(isPatientpresent(patientId)==false || isDoctorpresent(doctorId)==false){
        cout<<"Invalid Patient Id or Doctor ID "<<endl;
        cout<<"Apointement Schedule unsuccessful "<<endl;
        return;
    }


    Apointmenet temp(patientId,doctorId,Date);
    allAppointements.push_back(temp);
}
void viewPatient(){
    for(int i=0; i<allPatients.size(); i++){
        cout<<"Patient Name "<<allPatients[i].name<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
}
void viewDoctor(){
    for(int i=0; i<allDoctor.size(); i++){
        cout<<"Doctor Name "<<allDoctor[i].name<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

}
void viewAppointment(){
    for(int i=0; i<allAppointements.size(); i++){
        cout<<"Patient Name: "<<allAppointements[i].patientId<<" has appointement with Doctor Id:"<<allAppointements[i].doctorId<<" On Date:"<<allAppointements[i].Date<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

}



int main(){
    pid=1;
    did=1;
    int choice;

    do{
        cout<<"1. Add Patient "<<endl;
        cout<<"2. Add Doctor "<<endl;
        cout<<"3. Schedule Appointment "<<endl;
        cout<<"4. View Patients "<<endl;
        cout<<"5. View Doctor "<<endl;
        cout<<"6. View Appointement "<<endl;
        cout<<"0. Exit "<<endl;
        cout<<"Give your Choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
            addPatient();
            break;
        case 2:
            addDoctor();
            break;
        case 3:
            ScheduleAppointment();
            break;
        case 4:
            viewPatient();
            break;
        case 5:
            viewDoctor();
            break;
        case 6:
            viewAppointment();
            break;

        default:
            cout<<"Invalid Choice"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
        }
    }while(choice != 0);

    return 0;
}