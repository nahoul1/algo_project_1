/* Project 1
 * Filename: LockBox.cpp
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu, chamoun.a@northeastern.edu
 * Date: Febuary 4th 2023.
 * Contains the class implementations of ClientFeedback class for part b of the project.
 */


#include "ClientFeedback.h"
#include "LockBox.h"


ClientFeedback::ClientFeedback(int c_l_n, int inc_l_n):correctlocation_number(c_l_n), incorrectlocation_number(inc_l_n)
{
    correctlocation_number = c_l_n;  // setting to 0
    incorrectlocation_number = inc_l_n;
}

// implementation of set correctLocation
void ClientFeedback::set_correctLocation(int cnl)
{
    correctlocation_number = cnl;
}
void ClientFeedback::set_incorrectLocation(int incnl)
{
    incorrectlocation_number = incnl;
}



int ClientFeedback::get_correctLocation()
{
    return correctlocation_number;
}
int ClientFeedback::get_incorrectLocation()
{
    return incorrectlocation_number;
}


bool ClientFeedback::operator == (ClientFeedback &rhs)
{
    if (correctlocation_number == rhs.correctlocation_number && incorrectlocation_number == rhs.correctlocation_number)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void ClientFeedback::operator << (ClientFeedback & rhs)
{
    cout<< "Correct number of numbers in the correct location are: " << 
    rhs.get_correctLocation() << ". The Incorrect number of numbers in incorrect locations are: " <<
    rhs.get_incorrectLocation() <<
    endl;
}