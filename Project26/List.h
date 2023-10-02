#pragma once
#include "Element.h"
#include <iostream>
using namespace std;



template <class T>
class QueueList
{
private:
    Elem<T>* head;
    Elem<T>* tail;
    int count;
public:
    QueueList();
    ~QueueList();
    void Push(T data);
    void Print();
    int GetCount();
    void Extract();
    void DelAll();
};

template <class T>
QueueList<T>::QueueList()
{
    head = NULL;
    tail = NULL;
    count = 0;
}
template <class T>
QueueList<T>::~QueueList()
{
    DelAll();
}

template<class T>
int QueueList<T>::GetCount()
{
    return count;
}
template <class T>
void QueueList<T>::Push(T n)
{
    Elem<T>* temp = new Elem<T>;
    temp->data = n;
    temp->prev = tail;
    temp->next = NULL;

    if (count == 0)
        head = temp;
    else
        tail->next = temp;

    tail = temp;
    count++;
}

template <class T>
void QueueList<T>::Print()
{
    if (count != 0) {
        Elem<T>* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
template <class T>
void QueueList<T>::Extract()
{
    if (head == NULL)
    {
        cout << "The queue is empty." << endl;
        return;
    }
    else
    {
        Elem<T>* temp = head;
        head = head->next;
        delete temp;
        count--;
    }
}
template <class T>
void QueueList<T>::DelAll()
{
    if (head == NULL)
    {
        cout << "The queue is already empty." << endl;
        return;
    }
    while (head != NULL)
        Extract();
}