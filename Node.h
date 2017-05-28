/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Node Object variables and functions
------------------------------------------*/
#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
private:
  T m_value;
  Node* m_next;
public:
  Node(T value);
  T getValue();
  void setNext(Node* next);
  Node<T>* getNext() const;
};
#include "Node.cpp"
#endif
