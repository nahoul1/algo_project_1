/**************************************************************************
* Project 1 TEAM 2
* author          :Ajinkya Joshi, Anthony Chamoun
* Date            :February 4, 2023
* File name       :SmartClient.h
* Purpose         :Contains the class definitions of smartClient for part b
*                  of the project.
 **************************************************************************/

#ifndef SMARTCLIENT_H
#define SMARTCLIENT_H
#include <iostream>
#include "LockBox.h"
#include "ClientFeedback.h"
#include <vector>

using namespace std;

class SmartClient
{
private:
	int m = 10, n = 5;
	LockBox* lock;
public:
	SmartClient(int range, int length);
	SmartClient();
	LockBox clientGuess(vector<int> guess1);
	ClientFeedback getFeedback(LockBox* guess);
	bool isOpened(ClientFeedback* obj);
	void openLockBox();
};

#endif