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

/*
 * Private methods of the ClientFeedback class include the output of the lockbox methods that return the number of
 * correct and incorrect location numbers in the guess.
*/
private:
    int correctlocation_number, incorrectlocation_number;


public:

    /* Constructor method of ClientFeedback initializes the arbitrary correct length number and incorrect length number
     * to 0.
     * @pre none
     * @post The values are set to 0 and the correct number location and incorrect number locations have been equated
     * to the correct location number and the incorrect locaton number private data members.
     * @param correct locatio number and incorrect locatio number.
     * @return none
    */
    ClientFeedback(int c_l_n = 0, int inc_l_n = 0);


    // setter functions


    /* setter function that sets the correctlocation_number to the
     * @pre none
     * @post Initialized guess vector of size n
     * @param guess vector
     * @return none
    */
    void set_correctLocation(int cnl);


    /* setCode method takes in the guess vector, clears it of any previous inputs and initializes the size of the vector
     * to n.
     * @pre none
     * @post Initialized guess vector of size n
     * @param guess vector
     * @return none
    */
    void set_incorrectLocation(int incnl);


    //getter functions

    /* setCode method takes in the guess vector, clears it of any previous inputs and initializes the size of the vector
     * to n.
     * @pre none
     * @post Initialized guess vector of size n
     * @param guess vector
     * @return none
    */
    int get_correctLocation();


    /* setCode method takes in the guess vector, clears it of any previous inputs and initializes the size of the vector
     * to n.
     * @pre none
     * @post Initialized guess vector of size n
     * @param guess vector
     * @return none
    */
    int get_incorrectLocation();


    /* setCode method takes in the guess vector, clears it of any previous inputs and initializes the size of the vector
     * to n.
     * @pre none
     * @post Initialized guess vector of size n
     * @param guess vector
     * @return none
    */
    bool operator == (ClientFeedback &rhs);


    /* setCode method takes in the guess vector, clears it of any previous inputs and initializes the size of the vector
     * to n.
     * @pre none
     * @post Initialized guess vector of size n
     * @param guess vector
     * @return none
    */
    void operator << (ClientFeedback & rhs);


};

#endif