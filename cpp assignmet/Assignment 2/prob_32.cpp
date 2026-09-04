#include<iostream>
using namespace std;

namespace Physics {
    double clamp(double val, double min, double max){
        if(val < min){
            return min;
        }
        
        if(val > max){
            return max;
        }

        return val;
    }

    double lerp(double a, double b, double t){
        return a + (b-a) * t;
    }
}

namespace GameMath {
    int clmap(int val, int min, int max){
        if(val < min){
            return min;
        }

        if(val > max){
            return val;
        }

        return val;
    }

    double lerp(double a, double b, double t){
        return a + (a-b) * t;
    }
};

int main(){

    double velocity = Physics::clamp(120.5, 0.0, 100.0);
    double physicalValue = Physics::clamp(0.0, 100.0, 0.5);

    cout  << "Physical Clamp: " << velocity << endl;
    cout << "Physical lerp: " << physicalValue << endl;

    int stat = GameMath::clmap(120, 0, 100);
    double uiAnimation = GameMath::clmap(0.0, 100.0, 0.25);

    cout << "GameMath Clmap: " << stat << endl;
    cout << "GmaeMath lerp: " << uiAnimation << endl;

    {
    using namespace Physics;
        cout <<"using namespace physics" << clamp(150.0, 0.0, 100.0) << endl;

    }

    return 0;
}