/* Project 1
 * Filename: main.cpp
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu,
 * Date: Febuary 4th 2023.
 * contains the main dialogue options of the program
 */

#include <iostream>
#include "LockBox.h"
#include <time.h>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;


int main() {
	int a, b;

	cout << "Enter the length of the password: " << endl;
	cin >> a;

	cout << "Enter the range of numbers used (0 - m): " << endl << "m = ";
	cin >> b;


	LockBox* box = new LockBox(a, b);

	vector<int> guess;
	cout << "Enter your first guess, one digit at a time: " << endl;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		guess.push_back(k);
	}
	LockBox* guess1 = new LockBox(a, b);
	guess1->setCode(guess);
	
	
	vector<int> guess2;
	cout << "Enter your second guess, one digit at a time: " << endl;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		guess2.push_back(k);
	}
	LockBox* guess22 = new LockBox(a, b);
	guess22->setCode(guess2);

	vector<int> guess3;
	cout << "Enter your third guess, one digit at a time: " << endl;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		guess3.push_back(k);
	}
	LockBox* guess33 = new LockBox(a, b);
	guess33->setCode(guess3);


	cout << "First guess result: ";
	cout << endl;
	cout << box->correctLocation(*guess1) << ", " << box->incorrectLocation(*guess1) << endl;

	cout << "Second guess result: ";
	cout << box->correctLocation(*guess22) << ", " << box->incorrectLocation(*guess22) << endl;

	cout << "Third guess result: ";
	cout << box->correctLocation(*guess33) << ", " << box->incorrectLocation(*guess33) << endl;

	
	for (int i = 0; i < a; i++) {
		cout << box->getCode()[i] << ", ";
	}

}