/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Checks for parameters and runs program
------------------------------------------*/
#include "LinkedList.h"
#include "Executive.h"
#include "LinkedListTester.h"

int main(int argc, char* argv[])
{
  if(argc != 2)
  {
    std::cout << "Incorrect parameters!\n";
  }
  else if(argv[1])
  {
  Executive myExecutive(argv[1]);
  myExecutive.run();
  }
  return(0);
}
