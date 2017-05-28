/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Stores vairables and functions for Executive
------------------------------------------*/

#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "LinkedList.h"
#include "LinkedListTester.h"
#include <iostream>

class Executive
{
private:
  char* m_mode;
  char choice;
public:
  Executive(char* runMode);
  void run();
};
#endif
