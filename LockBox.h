#ifndef LOCKBOX_H
#define LOCKBOX_H
#include <iostream>
#include <vector>


class LockBox
{
private:
	int m, n;
	vector <int> Code(n, m);
public:
	LockBox(int length = 0, int range = 0);
	int CodeGen();
	int currentLocation(LockBox item);
	int incorrectLocation(LockBox item);
};

#endif