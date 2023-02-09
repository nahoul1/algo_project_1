/* Project 1
 * Filename: SmartClient.h
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu, chamoun.a@northeastern.edu
 * Date: Febuary 4th 2023.
 * Contains the class definitions of smartClient for part b of the project.
 */


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
	LockBox* lock = new LockBox(n, m);
public:
	SmartClient(int range, int length);
	SmartClient();
	LockBox clientGuess(vector<int> guess1);
	ClientFeedback getFeedback(LockBox* guess);
	bool isOpened(ClientFeedback* obj);
	void openLockBox();
};

#endif