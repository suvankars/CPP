#include <iostream>

using namespace std;

int main() {
    double degreesF, degreesC;
    cout << "Enter the temperature in degree F:" << endl;
    cin >> degreesF;
    degreesC = 5.0/9*(degreesF - 32 );
    cout << "Temperature in degrees C: " << degreesC << endl;
}
