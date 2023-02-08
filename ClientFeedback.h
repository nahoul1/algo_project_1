/* Project 1
 * Filename: ClientFeedback.h
 * Names: Anthony Chamoun, Ajinkya Joshi
 * Email: joshi.aji@northeastern.edu, chamoun.a@northeastern.edu
 * Date: Febuary 4th 2023.
 * Contains the class definitions of ClientFeedback class for part b of the project.
 */

#ifndef CLIENTFEEDBACK_H
#define CLIENTFEEDBACK_H

#include "LockBox.h"

class ClientFeedback
{
private:

public:
    ClientFeedback();
    void setValue();
    int getValue();
    bool operator==(LockBox& rhs);
    bool operator<<();

};

#endif