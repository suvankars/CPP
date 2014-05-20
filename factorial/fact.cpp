#include <iostream>

using namespace std;

int factorial(int n){
	if (n == 1) {
	   	return n; 
	}
	else {
	   	return  n * factorial ( n-1 ); 
	}
}

int main(){
	int res = factorial(5);
    cout << res << endl;
}
