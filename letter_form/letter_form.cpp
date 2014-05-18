#include <iostream>
#include <string>

using namespace std;

int main(){

    
    // get letter receiver name
    cout << "Enter the name or the person you want to write to \n";
    string receiver_name;
    cin >> receiver_name;    
    
    // get friend name

    cout << "Please enter your friends name, whome you care about:\n";
    string friend_name;
    cin >> friend_name;

    // get sex

    char friend_sex = 0;
    cout << "Please enter enter an m if the friend is male and an f if the friend is female:\n";
    cin >> friend_sex;
    string gender;

    if ( friend_sex == 'm' )
	gender = "his";
    else if ( friend_sex == 'f' )
	gender = "her";
    else {

	cout << "not sure? \n";
	gender = "her";
    }
   
    //get age

    int age;
    cout << "Please enter " << gender << " age \n";
    cin >> age; 
    if ( age >= 110  || age <= 0)
	cout << "error('you're kidding!')\n";

    // get writer name
    string my_name;
    cout << "My pet name?\n" ;
    cin >> my_name;

    //Write the letter and print in console
    
    cout << "\n\t\t**********\n\n";
    cout << "Dear " << receiver_name << ", \n";
    cout << "How are you? I am fine. I miss you.\n" ;
    cout << "Have you seen " << friend_name << " lately.";
    cout << "If you see " << friend_name << " please ask " << gender << " to call me\n";
    cout << "I hear you just had a birthday and you are " << age <<" years old.\n";
    if (age <= 12 ) 
	cout << "Next year you will be " <<  age + 1 << " haha.\n";
    else if (age == 17 ) 
	cout << "Next year you will be able to vote.\n";
    else if (age >= 70 )
	cout << "I hope you are enjoying retirement.\n";
    else 
	cout << "I hope you are enjoying this moment. \n";

    cout << "Yours sincerely,\n\n";
    cout << my_name << "\n\n";
    return 0;
}

