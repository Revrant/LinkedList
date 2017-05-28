/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Creates a Node Object
------------------------------------------*/

template <typename T>
Node<T>::Node(T value)
{
  m_value = value;
  m_next = nullptr;
}

template <typename T>
void Node<T>::setNext(Node* next)
{
  m_next = next;
}

template <typename T>
T Node<T>::getValue()
{
  return(m_value);
}

template <typename T>
Node<T>* Node<T>::getNext() const
{
  return(m_next);
}
