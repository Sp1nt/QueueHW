#include <iostream>
#include "List.h"
using namespace std;


int main()
{
    QueueList<int> a;
    a.Push(1);
    a.Push(2);
    a.Push(3);
    a.Push(4);
    a.Push(5);
    a.Push(6);
    a.Print();
    a.Extract();
    a.Extract();
    a.Extract();
    a.Print();
    a.DelAll();
    a.Print();
    return 0;
}