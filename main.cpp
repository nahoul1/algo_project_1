/* Project 1
 * Filename: main.cpp
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu, chamoun.a@northeastern.edu
 * Date: Febuary 4th 2023.
 * contains the main dialogue options of the program
 */

#include <iostream>
#include "LockBox.h"
#include <time.h>
#include <string>
#include <vector>
#include <cstdlib>
#include "ClientFeedback.h"
#include "SmartClient.h"
using namespace std;

/*
int main() {
	int a, b;

	cout << "Enter the length of the password: " << endl;
	cin >> a;

	cout << "Enter the range of numbers used (0 - m): " << endl;
	cin >> b;

	SmartClient* smart = new SmartClient(a, b);

	smart->openLockBox();


}
*/


int main() {

	int a, b;

	cout << "Enter the length of the password: " << endl;
	cin >> a;

	cout << "Enter the range of numbers used (0 - m): " << endl;
	cin >> b;

	LockBox* box = new LockBox(a, b);
	LockBox* guess = new LockBox(a, b);
	int num = 0;

	vector<int> guess1;
	cout << "Enter your guess, one digit at a time: " << endl;
	for (int i = 0; i < a; i++) {
		int k;
		cin >> k;
		guess1.push_back(k);
	}
	guess->setCode(guess1);
	cout << "Correct number of numbers in the correct location are: " << box->correctLocation(*guess) << endl;
	cout << "The Incorrect number of numbers in incorrect locations are: " << box->incorrectLocation(*guess) << endl;

	
	while (box->correctLocation(*guess) != a && num < 10) {
		vector<int> guess1;
		cout << "Enter your guess, one digit at a time: " << endl;
		for (int i = 0; i < a; i++) {
			int k;
			cin >> k;
			guess1.push_back(k);
		}
		guess->setCode(guess1);
		cout << "Correct number of numbers in the correct location are: " << box->correctLocation(*guess) << endl;
		cout << "The Incorrect number of numbers in incorrect locations are: " << box->incorrectLocation(*guess) << endl;
	}

	if (box->correctLocation(*guess) == a) {
		cout << "The lockbox has been opened!";
	}
	else {
		cout << "The lockbox has been disabled";
	}

}


	/*
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
		cout << box->getCode()[i];
	}
	*/
