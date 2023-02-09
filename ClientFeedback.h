/* Project 1
 * Filename: ClientFeedback.h
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu, chamoun.a@northeastern.edu
 * Date: Febuary 4th 2023.
 * Contains the class definitions of ClientFeedback class for part b of the project.
 */

#ifndef CLIENTFEEDBACK_H
#define CLIENTFEEDBACK_H
#include <iostream>
#include <cstring>
#include "LockBox.h"
using namespace std;

class ClientFeedback
{

private:
    int correctlocation_number, incorrectlocation_number;


public:

    ClientFeedback(int c_l_n = 0, int inc_l_n = 0);

    // setter functions
    void set_correctLocation(int correctlocation_number);
    void set_incorrectLocation(int incorrectlocation_number);


    //getter functions
    int get_correctLocation();
    int get_incorrectLocation();


    bool operator == (ClientFeedback &rhs);


    void operator << (ClientFeedback & rhs);


};

#endif