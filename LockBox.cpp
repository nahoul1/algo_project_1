#include <iostream>
#include "LockBox.h"
#include <time.h>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

LockBox::LockBox(int length, int range): length(m), range(n)
{
	m = range;
	n = length;
}

int LockBox::CodeGen() {
	srand(time(0));  // setting a random seed
	int a = rand() % m;  // generating a random number for the variable.
	return a;
}

int LockBox::currentLocation(LockBox item)
{

    // number of correct numbers in the right location, number of correct numbers.
}

int LockBox::incorrectLocation(LockBox item) {

}

