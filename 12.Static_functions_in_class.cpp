/*******************************************************
 * Copyright (C) 2022 Archit Jain arcyjain2002@gmail.com
 *
 * This file is part of my work.
 *
 * Dont worry you can copy and/or distribute without the express
 * permission of Archit Jain lol.
 *******************************************************/
// ────█▀█▄▄▄▄─────██▄
// ────█▀▄▄▄▄█─────█▀▀█
// ─▄▄▄█─────█──▄▄▄█
// ██▀▄█─▄██▀█─███▀█
// ─▀▀▀──▀█▄█▀─▀█▄█▀

// C++ program to demonstrate static
// member function in a class
// static member functions are allowed to access only the static data members or other static member functions,
// they can not access the non - static data members or member functions of the class.
#include <iostream>
using namespace std;

class GfG
{
public:
    // static member function
    static void printMsg()
    {
        cout << "Welcome to GfG!" << endl;
    }
    static void printMsg(string str)
    {
        cout << str << endl;
    }
};

class child : public GfG
{
public:
    static void printMsg()
    {

        cout << "child function printMsg() called" << endl;
    }
};

// main function
int main()
{
    // invoking a static member function
    GfG::printMsg();                                // scoper resolution operator to access the functions we can also access using the objects but it is not recommended.
    GfG::printMsg("overloading success in static"); // overloading is possible in static method
    child::printMsg();                              // it git overridden ig
}