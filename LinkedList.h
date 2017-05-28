/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Stores functions for linked list
------------------------------------------*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "Node.h"

template <typename T>
class LinkedList
{
private:
  Node<T>* m_front;
  int m_length;
public:
  LinkedList();
  ~LinkedList();
  Node<T>* getNode(int index);
  void addFront(T value);
  bool isEmpty();
  int getLength();
  int positionOf(T value);
  void addBack(T value);
  bool insert(int position, T value);
  bool removeBack();
  bool removeFront();
  bool removeAt(int position);
  void setEntry(int position, T value);
  T getEntry(int position);

};
#include "LinkedList.cpp"
#endif
