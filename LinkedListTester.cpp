/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Runs tests for Linked Lists
------------------------------------------*/
#include "LinkedListTester.h"

LinkedListTester::LinkedListTester()
{
  //runTests();
}

void LinkedListTester::test01()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #1: size of empty list is zero ";
  if(list->isEmpty())
  {
    std::cout << "PASSED!";
  }
  else
  {
    std::cout << "FAILED!";
  }
std::cout << std::endl;
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test02()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #2: size returns correct value after 1 addFront ";

  list->addFront(5);

  if(list->getLength() == 1)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
  list->removeFront();
}

//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test03()
{
LinkedList<int>* list2 = new LinkedList<int>;
std::cout << "Test #3: size returns correct value after 1 addBack ";
list2->addBack(3);

if(list2->getLength() == 1)
{
  std::cout << "PASSED";
}
else
{
  std::cout << "FAILED";
}
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test04()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #4: size returns correct value after multiple addFront ";
  list->addFront(5);
  list->addFront(2);

  if(list->getLength() == 2)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test05()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #5: size returns correct value after multiple addBack ";
  list->addBack(2);
  list->addBack(5);

  if(list->getLength() == 2)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test06()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #6: size returns correct value after adds and removeFront ";
  list->addFront(2);
  list->removeFront();

  if(list->getLength() == 0)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test07()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #7: size returns correct value after adds and removeBack ";
  list->addBack(2);
  list->removeBack();

  if(list->getLength() == 0)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test08()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #8: size reduced by 1 removeFront on populated list ";
  list->addFront(2);
  list->addFront(4);
  list->addFront(7);
  list->removeFront();

  if(list->getLength() == 2)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test09()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #9: size reduced by 1 removeBack on populated list ";
  list->addBack(2);
  list->addBack(4);
  list->addBack(7);
  list->removeBack();

  if(list->getLength() == 2)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test10()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #10: positionOf returns 0 on empty list ";
  if(list->positionOf(3) == 0)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test11()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #11: positionOf returns 0 when value not in list ";
  list->addFront(7);
  if(list->positionOf(2) == 0)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test12()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #12: positionOf returns true if value is in populated list ";
  list->addFront(6);

  if(list->positionOf(6) == 0)
  {
    std::cout << "FAILED";
  }
  else
  {
    std::cout << "PASSED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************

void LinkedListTester::test13()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #13: removeFront on empty list returns false ";
  if(list->removeFront() == false)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test14()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #14: removeBack on empty list returns false ";
  if(list->removeBack() == false)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
  std::cout << std::endl;
  //list->~LinkedListTester();

}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test15()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #15: insert returns false given an invalid position ";
  if(list->insert(5, 4) == false)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
    //list->~LinkedListTester();
}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::test16()
{
  LinkedList<int>* list = new LinkedList<int>;
  std::cout << "Test #16: order preserved by insert on populated list ";
  list->addFront(2);
  list->addFront(4);
  list->addFront(6);
  list->insert(2, 5);

  if(list->getEntry(1) == 6 && list->getEntry(2) == 5 && list->getEntry(3) == 4 && list->getEntry(4) == 2)
  {
    std::cout << "PASSED";
  }
  else
  {
    std::cout << "FAILED";
  }
std::cout << std::endl;
  //list->~LinkedListTester();

}
//******************************************************************************
//******************************************************************************
//******************************************************************************
void LinkedListTester::runTests()
{
  test01();
  test02();
  test03();
  test04();
  test05();
  test06();
  test07();
  test08();
  test09();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
  test16();
}




//-----
