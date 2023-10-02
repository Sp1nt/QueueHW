#pragma once
#include <iostream>
using namespace std;

template <typename T>
struct Elem
{
    T data;
    Elem* next;
    Elem* prev;
};