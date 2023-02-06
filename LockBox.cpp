#include <iostream>
#include "LockBox.h"
#include <time.h>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;



LockBox::LockBox(int length, int range)
{
	m = range;
	n = length;
	srand(time(0));
	for (int i = 0; i < n; i++) {
		int p = CodeGen();
		password.push_back(p);
	}
}

int LockBox::CodeGen() {
	int a = rand() % m;  // generating a random number for the variable.
	return a;
}

int LockBox::correctLocation(LockBox item)
{
	int h = 0;

	for (int i = 0; i < n; i++) {
		if (password[i] == item.guess[i]) {
			h++;
		}
	}
	return h;

	// number of correct numbers in the right location, number of correct numbers.
}

int LockBox::incorrectLocation(LockBox item) {

	int h = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (password[i] == item.guess[j]) {
					h++;
				}
			}
			// still have to find a way to make it only count a digit once
		}
	}
	return h;
}

void LockBox::setCode(vector<int> guess1) {
	guess.clear();
	for (int i = 0; i < n; i++)
	{
		guess.push_back(guess1[i]);
	}
}

vector<int> LockBox::getCode() {
	return password;
}
