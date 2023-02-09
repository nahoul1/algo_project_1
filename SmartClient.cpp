/* Project 1
 * Filename: SmartClient.h
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu, chamoun.a@northeastern.edu
 * Date: Febuary 4th 2023.
 * Contains the class implementations of smartClient for part b of the project.
 */
#include <iostream>
#include "LockBox.h"
#include "ClientFeedback.h"
#include <vector>
#include "SmartClient.h"
#include <time.h>
#include <cstdlib>

using namespace std;

/*
* Constructor method initializes the length and range of the lockbox code. This corresponds to the variables m and
* n for the length and range respectively.
*/
SmartClient::SmartClient(int length, int range) {
	m = range;
	n = length;
	
}

/*
* Constructor method initializes the length and range of the lockbox code to default length 5, range 10
*/
SmartClient::SmartClient() {
	m = 10;
	n = 5;
}


/*
*
* 
*/
LockBox SmartClient::clientGuess(vector<int> guess1) {
	LockBox* obj = new LockBox(n, m);
	obj->setCode(guess1);
	return *obj;
}

ClientFeedback SmartClient::getFeedback(LockBox* guess) {
	ClientFeedback* obj = new ClientFeedback();
	
	return *obj;
}

bool SmartClient::isOpened(ClientFeedback *obj) {
	if ((obj->get_correctLocation())==n) {
		return true;
	}
	else {
		return false;
	}
}

void SmartClient::openLockBox() {


	for (int i = 0; i < n; i++) {
		cout << lock->getCode()[i] << " ";
	}
	cout << endl;


	vector<int> guess;
	cout << "Enter your first guess, one digit at a time: " << endl;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		guess.push_back(k);
	}

	ClientFeedback* p = new ClientFeedback();
	LockBox* q = new LockBox;

	*q = clientGuess(guess);
	*p = getFeedback(q);


	while (isOpened(p) == false) {
		vector<int> guess1;
		cout << "Enter your guess, one digit at a time: " << endl;
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			guess1.push_back(k);
		}
	}
}