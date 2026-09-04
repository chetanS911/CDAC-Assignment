#include <iostream>
#include <cmath>
using namespace std;

double computeRMS(double* signal, int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + (*(signal + i) * *(signal + i));
    }
    return sqrt(sum / n);
}

void normalise(double* signal, int n) {
    double max = 0;

    for (int i = 0; i < n; i++) {
        double value = *(signal + i);

        if (value < 0) {
            value = -value;
        }
        if (value > max) {
            max = value;
        }
    }

    for (int i = 0; i < n; i++) {
        *(signal + i) = *(signal + i) / max;
    }
}

int countZeroCrossings(double* signal, int n) {
    int count = 0;

    for (int i = 0; i < n - 1; i++) {

        if ((*(signal + i) > 0 && *(signal + i + 1) < 0) ||
            (*(signal + i) < 0 && *(signal + i + 1) > 0)) {
            count++;
        }
    }
    return count;
}

void applyGain(double* signal, int n, double gainFactor) {
    for (int i = 0; i < n; i++) {
        *(signal + i) = *(signal + i) * gainFactor;
    }
}

int main() {

    double signal[] = {0.5, -1.2, 0.8, -0.3, 1.0, -0.9, 0.1};
    int n = 7;

    cout << "Before:" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(signal + i) << " ";
    }

    cout << endl;

    double rms = computeRMS(signal, n);

    int crossings = countZeroCrossings(signal, n);

    cout << "RMS: " << rms << endl;
    cout << "Zero crossings: " << crossings << endl;

    normalise(signal, n);
    cout << "After normalise:" << endl;

    for (int i = 0; i < n; i++) {
        cout << *(signal + i) << " ";
    }

    cout << endl;

    applyGain(signal, n, 2);

    cout << "After gain:" << endl;

    for (int i = 0; i < n; i++) {
        cout << *(signal + i) << " ";
    }
    cout << endl;
    return 0;
}