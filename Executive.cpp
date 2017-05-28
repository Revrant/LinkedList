/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Runs the menu and calls functions from LinkedList.h
------------------------------------------*/
#include "Executive.h"

Executive::Executive(char* runMode)
{
  m_mode = runMode;
}

void Executive::run()
{
  if(m_mode[1] == 'i')
  {
  LinkedList<int>* list = new LinkedList<int>;
  char choice = '\0';
  int val = 0;
  int pos = 1;
  do
  {
  std::cout << "Make a selection:\n";
  std::cout << "1) Add front\n";
  std::cout << "2) Add back\n";
  std::cout << "3) Remove front\n";
  std::cout << "4) Remove back\n";
  std::cout << "5) Insert value at position\n";
  std::cout << "6) Print length\n";
  std::cout << "7) Print list\n";
  std::cout << "8) Exit\n";
  std::cout << "Choice: ";
  std::cin >> choice;


  while(choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' &&
  choice != '7' && choice != '8')
  {
    std::cin >> choice;
  }

  if(choice == '1')
  {
    std::cout << "Input a value: ";
    std::cin >> val;
    list->addFront(val);
  }

  else if(choice == '2')
  {
    std::cout << "Input a value: ";
    std::cin >> val;
    list->addBack(val);
  }

  else if(choice == '3')
  {
    list->removeFront();
  }

  else if(choice == '4')
  {
    list->removeBack();
  }

  else if(choice == '5')
  {
    std::cout << "Input a value: ";
    std::cin >> val;
    std::cout << "Insert a position: ";
    std::cin >> pos;
    list->insert(pos, val);
  }

  else if(choice == '6')
  {
    std::cout << list->getLength();
  }

  else if(choice == '7')
  {
    pos = 1;
    for(int i = 0; i < list->getLength(); i++)
    {
      if(i == list->getLength() - 1)
      {
        std::cout << list->getEntry(pos);
      }
      else
      {
        std::cout << list->getEntry(pos) << ", ";
      }
      pos++;
    }
  }

  std::cout << std::endl;
  }while(choice != '8');
  std::cout << "Goodbye!\n";
  }
  else 
  {
    LinkedListTester test;
    test.runTests();
  }
}
