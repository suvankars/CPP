#include <iostream>


using namespace std;


void swap_by_references(int &a, int &b){
	int temp;	
	temp = a;
	a = b;
	b = temp;
}


void swap_using_pointer(int *a, int *b){
	int temp;	
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_using_temp_pointer(int *a, int *b){
 	int *temp, k;
 	temp = &k;
 	*temp = *a;
 	*a = *b;
 	*b = *temp;
}

int main(){
	int i = 10, j = 20;
	
	cout << "Before swap: \n i: " << i << " " << "j: " << j << endl;
	swap_by_references(i, j);
	cout << "After swap: \n i: " << i << " " << "j: " << j << endl;
	
	cout << "Before swap: \n i: " << i << " " << "j: " << j << endl;
	swap_using_pointer(&i, &j);
	cout << "After swap using pointer: \n i: " << i << " " << "j: " << j << endl;
	
	cout << "Before swap: \n i: " << i << " " << "j: " << j << endl;
	swap_using_temp_pointer(&i, &j);
	cout << "After swap using temp pointer: \n i: " << i << " " << "j: " << j << endl;
}
