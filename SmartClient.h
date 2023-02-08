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
	int m, n;
	LockBox* lock = new LockBox();
public:
	SmartClient(int range, int length);
	SmartClient();
	void printCode();
	LockBox clientGuess(vector<int> guess1);
	ClientFeedback getFeedback(vector<int> guess1);
	bool isOpened(ClientFeedback* obj);
	void openLockBox();
};

#endif