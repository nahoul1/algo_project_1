#include <iostream>
#include "LockBox.h"
#include <time.h>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

LockBox::LockBox(int length, int range) {
	m = range;
	n = length;
}

int LockBox::CodeGen() {
	srand(time(0));
	int a = rand() % m;
	return a;
}

int LockBox::currentLocation(LockBox item) {

}

int LockBox::incorrectLocation(LockBox item) {

}

