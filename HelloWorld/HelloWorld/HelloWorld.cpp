// HelloWorld.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdio> // for getchar
#include <iomanip> // for setw

using namespace std;

int main() {
	// set up cout to left-align
	cout << setiosflags(ios::left);
	for (int r = 0; r < 6; r++) {
		for (int c = 0; c < 4; c++) {
			cout << setw(17) << "Hello World!";
		}
		cout << endl;
	}
	std::getchar();
	return 0;
}



