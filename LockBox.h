/* Project 1
 * Filename: LockBox.h
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu,
 * Date: Febuary 4th 2023.
 * Contains the class definitions of lockbox for part a of the project.
 */


#ifndef LOCKBOX_H
#define LOCKBOX_H
#include <iostream>
#include <vector>

using namespace std;

class LockBox
{
private:
    int m, n;
    vector<int> password;
    vector<int> guess;

public:

    /* Constructor method initializes the length and range of the lockbox code. This corresponds to the variables m and
     * n for the length and range respectively.
     * @pre none
     * @post length and range, both of type int, equal to 0
     * @param No parameter.
     * @return none
    */
    LockBox(int length = 0, int range = 0);

    void setCode(vector<int> guess);
    vector<int> getCode();
    int CodeGen();
    int correctLocation(LockBox item);
    int incorrectLocation(LockBox item);
};

#endif