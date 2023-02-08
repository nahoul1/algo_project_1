#include <iostream>
#include "LockBox.h"
#include "ClientFeedback.h"
#include <vector>
#include "SmartClient.h"
#include <time.h>
#include <cstdlib>

using namespace std;

SmartClient::SmartClient(int length, int range) {
	m = range;
	n = length;
}

SmartClient::SmartClient() {
	m = 10;
	n = 5;
}

void SmartClient::printCode() {
	for (int i = 0; i < n; i++) {
		lock->getCode()[i];
	}
}

LockBox SmartClient::clientGuess(vector<int> guess1) {
	LockBox* obj = new LockBox(n, m);
	obj->setCode(guess1);
	return *obj;
}

ClientFeedback SmartClient::getFeedback(vector<int> guess1) {
	ClientFeedback* obj = new ClientFeedback();
	// if guess1 is right or wrong do something to obj
	return *obj;
}

bool SmartClient::isOpened(ClientFeedback* obj) {
	if (obj->getValue() == lock->getCode()) {
		return true;
	}
	else {
		return false;
	}
}

void SmartClient::openLockBox() {
	cout << lock->getCode();

}