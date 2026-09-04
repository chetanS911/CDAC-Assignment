#include<iostream>
using namespace std;

int main() {
    int R, C;

    cout << "Enter number of rows: ";
    cin >> R;

    cout << "Enter number of coloums: ";
    cin >> C;

    int** map = new int*[R];

    for(int i=0; i<R; i++){
        map[i] = new int[C];
    }


    cout << "Enter the vlaue: " << endl;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){

            cout << "map[" << i << "][" <<  "] = ";
            cin >> map[i][j];
        }
    }

    cout << "\nGame map" << endl;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            cout << map[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nLegend:" << endl;
    cout <<"0 = Grass" << endl;
    cout << "1 = Water" << endl;
    cout << "2 = Mountain" << endl;
    cout << "3 = Forest" << endl;
    cout << "4 = Dungeon" << endl;

    int grass = 0;
    int water = 0;
    int mountain = 0;
    int forest = 0;
    int dungeon = 0;

    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){

            if(map[i][j] == 0)
                grass++;
            
            else if(map[i][j] == 1)
                water++;
            
            else if(map[i][j] == 2)
                mountain++;

            else if(map[i][j] == 3)
                forest++;

            else if(map[i][j] == 4)
                dungeon++;

        }
    }

    cout << "\nTitle Count" << endl;
    cout << "Grass : " << grass << endl;
    cout << "Water: " << water << endl;
    cout << "Mountain: " << mountain << endl;
    cout << "Forest: " << forest << endl;
    cout << "dungeon: " << dungeon << endl;

    for(int i=0; i<R; i++){
        delete[] map[i];
    }

    delete[] map;

    return 0;
}