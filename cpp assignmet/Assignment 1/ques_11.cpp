#include<iostream>
using namespace std;

int main(){

    double reading;
    cout << "Enter the reading: ";
    cin >> reading;
    int statusCode;

    double F = (reading * 9 / 5) + 32;

    cout << "Temperature: " << reading << "C / " << F << "F" <<endl;

    if(0 > reading){
        cout << "Status: SENSOR_ERROR" << endl;
        statusCode = -1;
    } 
    else if (reading > 0 && reading <= 29 ){
        cout << "Status: NORMAL" << endl;
        statusCode = 0;
    }
    else if (reading >= 30 && reading <= 44){
        cout << "Status: WARNING" << endl;
        statusCode = 1;
    }
    else if (reading >= 45 && reading <= 59){
        cout << "Status: CRITICAL" << endl;
        statusCode = 2;
    }
    else{
        cout << "Status: SHUTDOWN" << endl;
        statusCode = 3;
    }

    switch(statusCode){
        case -1: 
            cout << "Action: Sensor fault--check wiring" << endl;
            break;
        
        case 0: 
            cout << "Action : No action required" << endl;
            break;
        
        case 1:
            cout << "Action : Alert to supervisor" << endl;
            break;

        case 2: 
            cout << "Action : Cooling System triggered" << endl;
            break;

        case 3: 
            cout << "Action : Emergency shutdown initiated" << endl;
            break;
    }
    
    cout << "Reading: " <<  (reading > 25 ? "Above average" : "Below average") << endl;


    return 0;

}