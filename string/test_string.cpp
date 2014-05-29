#include <iostream>
#include <string>

using namespace std;

int CountOccurences(char ch,string s){
	int count = 0;
	for(int i = 0; i < s.length(); i++ ){
		if (s[i] == ch)
			count++;	
	}
	return count;
}

string RemoveOccurences(char ch, string s){
	string result = "";
	for (int i = 0; i < s.length(); i++ ) {
		if (s[i] != ch)
			result += s[i];
	}
	return result;
}

void RemoveOccurencesSources(char ch, string &s){
	int found = 0;
	// the next time around the loop right 'found' is that the place where  found a
	//previous occurrence for that character
	while ((found = s.find(ch, found)) != string::npos)
		s.erase(found, 1); 
}


int main(){
	string test_string = "Happy Regarde";
	cout << CountOccurences('a', test_string) << endl;
	cout << RemoveOccurences('a', test_string) << endl;
	RemoveOccurencesSources('a', test_string); 
	cout << test_string << endl;
	return 0;
}

