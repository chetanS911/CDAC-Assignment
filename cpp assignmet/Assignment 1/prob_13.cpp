#include<iostream>
using namespace std;

int main() {

    double temperature[3][3];

    for(int i=0; i<3; i++) {
        cout <<  "Enter the temperature for floor " << i + 1 << ": " << endl;
    

    for(int j=0; j<3; j++){
        cout << "Room" << j + 1 << endl;
        cin >> temperature[i][j];
    }

  }

  cout << "\n";
  cout << "     Room1  Room2  Room3" << endl;

  for(int i =0; i<3; i++){
    cout << "Floor" << i + 1 << " : ";

    for (int j=0; j<3; j++){
        cout << temperature[i][j] << "  ";
    }
    cout << endl;
  }

  double hottest = temperature[0][0];
  int hottestfloor = 0;
  int hottestroom = 0;

  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){

        if(temperature[i][j] > hottest) {
            
            hottest = temperature[i][j];

            hottestfloor = i;
            hottestroom = j;
        }
    }
  }

  cout << "\nhottest room: floor "
        << hottestfloor + 1 << ",Room" << hottestroom + 1 << " -> " << hottest << 'C' << endl;


    double highestAverage = temperature[0][0];
    int highestFloor = 0;
    double sum = 0 ;

    for(int i=0; i<3; i++){

        for(int j=0; j<3; j++){

            sum = sum + temperature[i][j];
        }

        double average = sum / 3;
        
        if(average > highestAverage){

            highestAverage = average;
            highestFloor = i;
        }

    }

    cout << "Hottest Floor: Floor " << highestFloor + 1 << " (avg " << highestAverage << " C)" << endl;

    int warningRooms = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(temperature[i][j] >= 30) {
                warningRooms++;
            }
        }
    }

    cout << "Rooms at warning or above : " << warningRooms << endl;

    return 0;
}