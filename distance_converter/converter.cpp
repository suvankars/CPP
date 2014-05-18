/*
 *A program in C++ that converts from miles to kilometers, yard to feet and meter to centimeter.
 * program should have a reasonable prompt for the user to enter a number of respective value
*/

#include <iostream>

using namespace std;

int main(){
    cout << "To convert Mile to KM enter 1\n";
    cout << "To convert Yard to Feet enter 2\n";
    cout << "To convert Meter to Centimeter enter 3\n";
    int choice = 0;
    cin >> choice;

    double take_input(string t);
    void mile_to_km();
    void yard_to_feet();
    void meter_to_centimeter();

    switch (choice ){
	case 1:
	    mile_to_km();
	    break;
	case 2:
	    yard_to_feet();
	    break;
	case 3:
	    meter_to_centimeter();
	    break;
    }

}

void write_out(string type, double primary, string target_type, double converted){
    cout << primary << " " << type << " = " << converted << " " << target_type << "\n";
}

double take_input(string t){
    cout << "Enter value in " << t << "\n";
    double val = 0;
    cin >> val;
    return val;
}

void mile_to_km(){
    double km;
    double mile;
    mile = take_input( "Mile ");
    km = mile*1.609;
    write_out("Mile", mile, "KM", km);
}

void yard_to_feet(){
    double yard;
    double feet;
    yard = take_input( "Yard ");
    feet = yard/3;
    write_out("Yard", yard, "Feet", feet);
}

void meter_to_centimeter(){
    double meter;
    double centimeter;
    meter = take_input( "Meter ");
    centimeter = meter * 100;
    write_out("Meter", meter, "Centimeter", centimeter);
}

