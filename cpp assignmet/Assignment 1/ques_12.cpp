#include <iostream>
using namespace std;

int main() {

    int N;
    double reading[100];

    cout << "Enter the Number of readings: ";
    cin >> N;
    cout << endl;

    cout << "Enter the reading: ";

    for (int i = 0; i < N; i++) {
        cin >> reading[i];
    }

   
    cout << "Valid readings: ";

    int Skipped = 0;

    for (int i = 0; i < N; i++) {

        if (reading[i] < 0) {
            Skipped++;
            continue;
        }

        cout << reading[i] << " ";
    }

    cout << endl;
    cout << "Skipped (errors): " << Skipped << endl;

    
    for (int i = 0; i < N; i++) {

        if (reading[i] >= 45) {
            cout << "First CRITICAL: Index "
                 << i << " -> " << reading[i] << "C" << endl;
            break;
        }
    }

    double min;
    double max;
    double sum = 0;
    int validCount = 0;

    int normal = 0;
    int warning = 0;
    int critical = 0;
    int shutdown = 0;

    
    for (int i = 0; i < N; i++) {

       
        if (reading[i] < 0) {
            continue;
        }


        if (validCount == 0) {
            min = reading[i];
            max = reading[i];
        }
        else {

            if (reading[i] < min) {
                min = reading[i];
            }

            if (reading[i] > max) {
                max = reading[i];
            }
        }

        sum = sum + reading[i];
        validCount++;

   
        if (reading[i] >= 0 && reading[i] <= 29) {
            normal++;
        }
        else if (reading[i] >= 30 && reading[i] <= 44) {
            warning++;
        }
        else if (reading[i] >= 45 && reading[i] <= 59) {
            critical++;
        }
        else {
            shutdown++;
        }
    }

    cout << endl;

    
    if (validCount > 0) {

        double average = sum / validCount;

        cout << "Minimum: " << min << endl;
        cout << "Maximum: " << max << endl;
        cout << "Average: " << average << endl;
    }
    else {
        cout << "No valid readings." << endl;
    }

    cout << "Normal: " << normal << endl;
    cout << "Warning: " << warning << endl;
    cout << "Critical: " << critical << endl;
    cout << "Shutdown: " << shutdown << endl;

    return 0;
}