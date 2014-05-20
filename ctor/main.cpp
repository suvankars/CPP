/*
 * Play arround with constructor and destructor
*/

#include <iostream>

class Game {
	public: 
		Game(){
			std::cout << "Initializing ..." << std::endl;
		}

		
		~Game(){
			std::cout << "Force destroing ..." << std::endl;
		}
};

void foo(Game g) {

	std::cout << "inside foo " << std::endl;
}

int main(int argc, char *argv[]) {
	Game g;
	foo(g);
	std::cout << "Hello World" << std::endl;
}
