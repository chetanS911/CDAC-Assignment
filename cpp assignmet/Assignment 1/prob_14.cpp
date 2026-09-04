#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {

    if (argc != 4) {
        cout << "Usage: ./sensor_monitor <warn> <critical> <readings>" << endl;
        cout << "Error: Missing arguments." << endl;
        return 1;
    }

    int warn = stoi(argv[1]);
    int critical = stoi(argv[2]);
    int n = stoi(argv[3]);

    if (warn >= critical) {
        cout << "Error: warn must be less than critical." << endl;
        return 1;
    }

    if (n < 1 || n > 500) {
        cout << "Error: readings must be between 1 and 500." << endl;
        return 1;
    }

    int normal = 0;
    int warning = 0;
    int criticalCount = 0;
    int shutdown = 0;

    for (int i = 0; i < n; i++) {

        int temperature = rand() % 70;

        if (temperature < warn) {
            normal++;
        }
        else if (temperature < critical) {
            warning++;
        }
        else if (temperature < 60) {
            criticalCount++;
        }
        else {
            shutdown++;
        }
    }

    cout << "Config: Warn=" << warn
         << "C Critical=" << critical
         << "C Readings=" << n << endl;

    cout << "Results: Normal=" << normal
         << " Warning=" << warning
         << " Critical=" << criticalCount
         << " Shutdown=" << shutdown << endl;

    return 0;
}