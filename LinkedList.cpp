/*-----------------------------------------
Name: Tristen Schwarzenberger
ID: 2878034
Class: EECS 268
Lab: 02 Linked Lists
Date Last Modified: 01/30/2017
File Summary: Creates all methods for Linked Lists
------------------------------------------*/
//*********************************************************************
//
//     CONSTRUCTOR
//
//*********************************************************************
template <typename T>
LinkedList<T>::LinkedList()
{
  m_front = nullptr;
  m_length = 0;
}

//*********************************************************************
//
//     DECONSTRUCTOR
//
//*********************************************************************
template <typename T>
LinkedList<T>::~LinkedList()
{
  Node<T>* temp = m_front;

  while(temp->getNext() != nullptr)
  {
    Node<T>* current = temp->getNext();
    delete temp;
    temp = current;
  }

}

//*********************************************************************
//
//     GET NODE
//
//*********************************************************************
template <typename T>
Node<T>* LinkedList<T>::getNode(int index)
{
  if(m_length == 0 || index > m_length || index < 1)
  {
    return(nullptr);
  }

  Node<T>* current = m_front;

    for(int i = 1; i < index; i++)
    {
      current = current->getNext();
    }
  return(current);
}

//*********************************************************************
//
//     ADD FRONT
//
//*********************************************************************
template <typename T>
void LinkedList<T>::addFront(T value)
{
  Node<T>* temp = new Node<T>(value);
  if(isEmpty())
  {
    m_front = temp;
  }
  else
  {
    temp->setNext(m_front);
    m_front = temp;
  }
  m_length++;
}

//*********************************************************************
//
//     IS EMPTY
//
//*********************************************************************
template <typename T>
bool LinkedList<T>::isEmpty()
{
  return(m_length == 0);
}

//*********************************************************************
//
//     GET LENGTH
//
//*********************************************************************
template <typename T>
int LinkedList<T>::getLength()
{
  return(m_length);
}

//*********************************************************************
//
//     POSITION OF
//
//*********************************************************************
template <typename T>
int LinkedList<T>::positionOf(T value)
{
  if(isEmpty())
  {
    return(0);
  }
  for(int i = 1; i <= m_length; i++)
  {
      Node<T>* temp = getNode(i);
      if(temp->getValue() == value)
      {
        return(i);
      }
  }
  return(0);
}

//*********************************************************************
//
//     ADD BACK
//
//*********************************************************************
template <typename T>
void LinkedList<T>::addBack(T value)
{
  if(isEmpty())
  {
    return;
  }
  else
  {
    Node<T>* temp = new Node<T>(value);
    Node<T>* hop = m_front;

    while(hop->getNext() != nullptr)
    {
      hop = hop->getNext();
    }
      hop->setNext(temp);
  }
  m_length++;
}

//*********************************************************************
//
//     INSERT
//
//*********************************************************************
template <typename T>
bool LinkedList<T>::insert(int position, T value)
{
  if(isEmpty() || position > m_length + 1 || position < 1)
  {
    return(false);
  }
  else if(position == 1)
  {
    addFront(value);
  }
  else if(position == m_length + 1)
  {
    addBack(value);
  }
  else
  {
    Node<T>* temp = new Node<T>(value);
    Node<T>* hop = m_front;
    Node<T>* hop2 = m_front;

    for(int i = 1; i < position; i++)
    {
      hop = hop->getNext();
    }
    for(int i = 1; i < position - 1; i++)
    {
      hop2 = hop2->getNext();
    }
    temp->setNext(hop);
    hop2->setNext(temp);
  }
  m_length++;
  return(true);
}

//*********************************************************************
//
//     REMOVE BACK
//
//*********************************************************************
template <typename T>
bool LinkedList<T>::removeBack()
{
  if(isEmpty())
  {
    return(false);
  }
  else if(m_length == 1)
  {
    return(removeFront());
  }
  else
  {
    Node<T>* temp = m_front;
    for(int i = 1; i < m_length - 1; i++)
    {
      temp = temp->getNext();
    }

    delete temp->getNext();
    temp->setNext(nullptr);

  }
  m_length--;
  return(true);
}

//*********************************************************************
//
//     REMOVE FRONT
//
//*********************************************************************
template <typename T>
bool LinkedList<T>::removeFront()
{
  if(isEmpty())
  {
    return(false);
  }
  else if(m_length == 1)
  {
    delete m_front;
    m_front = nullptr;
    m_length = 0;
  }
  else
  {
    Node<T>* temp = m_front;
    temp = temp->getNext();
    delete m_front;
    m_front = temp;
    m_length--;
  }
  return(true);
}

//*********************************************************************
//
//     REMOVE AT
//
//*********************************************************************
template <typename T>
bool LinkedList<T>::removeAt(int position)
{
  if(isEmpty() || position < 1 || position > m_length)
  {
    return(false);
  }
  else if(m_length == 1 || position == 1)
  {
    return(removeFront());
  }
  else if(position == m_length)
  {
    return(removeBack());
  }
  else
  {
    Node<T>* temp = m_front;
    Node<T>* hop = m_front;
    for(int i = 1; i <= position; i++)
    {
      hop = hop->getNext();
    }
    for(int i = 1; i < position - 1; i++)
    {
      temp = temp->getNext();
    }

    delete temp->getNext();
    temp->setNext(hop);
  }
  m_length--;
  return(true);
}

//*********************************************************************
//
//     SET ENTRY
//
//*********************************************************************
template <typename T>
void LinkedList<T>::setEntry(int position, T value)
{
  position = value;
}

//*********************************************************************
//
//     GET ENTRY
//
//*********************************************************************
template <typename T>
T LinkedList<T>::getEntry(int position)
{
  int currentPos = 1;
  Node<T>* current = m_front;
  while(currentPos < position)
  {
    current = current->getNext();
    currentPos++;
  }
  return(current->getValue());
}
//*********************************************************************
//*********************************************************************
//*********************************************************************
//*********************************************************************
//*********************************************************************
//*********************************************************************
//*********************************************************************
//*********************************************************************
