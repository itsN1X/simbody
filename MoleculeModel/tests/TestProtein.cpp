#include <iostream>
#include "chemistry/Protein.h"

using namespace std;

int main() {
	cout << Protein("AGF").sequence() << endl;

	return 0;	
}