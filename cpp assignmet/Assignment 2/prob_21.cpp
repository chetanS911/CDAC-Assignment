#include<iostream>
#include<string>
using namespace std;

class Patient{
    private:
        int patientId;
        string name;
        int age;
        string ward;
        const string bloodGroup;

    public:
        Patient() : bloodGroup("O+")
        {
            patientId = 0;
            name = "Unknown";
            age = 0;
            ward = "General";

            cout << "[Constructor] Default patient registered." << endl;
        }

        Patient(int Id, const string& n) : bloodGroup("O+")
        {
            patientId = Id;
            name = n;
            age = 0;
            ward = "Emergency";

            cout << "[Constructor] Emergency: " << name << endl;
        }

        Patient(int Id, const string& n, int a, const string& w, const string& bg) : bloodGroup(bg)
        {
            patientId = Id;
            name = n;
            age = a;
            ward = w;

            cout << "[Constructor] Full admission: " << name << endl;
        }

        ~Patient()
        {
            cout << "Patient " << name << " discharged" << endl;
        }

        void displayRecord() const 
        {
            cout << "ID: " << patientId << endl;
            cout << "Name " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Ward " << ward << endl;
            cout << "Blood Grp: " << bloodGroup << endl;
        }

        void transferWard(const string& newWard)
        {
            cout << "Ward Transfer: " << name << " -> " << newWard << endl;

            ward = newWard;
        }
};

int main(){

    Patient p1;
    Patient p2(101, "Kartik");
    Patient p3(102, "Sanchit", 25, "Cardiology","B-" );

    p1.displayRecord();
    p2.displayRecord();
    p3.displayRecord();

    Patient* patients = new Patient[4];

    for(int i=0; i<4; i++){
        patients[i].displayRecord();
    }

    patients[0].transferWard("ICU");

    patients[0].displayRecord();

    delete[] patients;

    return 0;
}