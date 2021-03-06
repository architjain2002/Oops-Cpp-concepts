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

#include <iostream>
using namespace std;

class Base
{
private:
    int x;

public:
    Base() // constructor with assigning the value of x = 0;
    {
        x = 0;
    }

    int get() // getter
    {
        return x;
    }

    void set(int value) // setter
    {
        this->x = value; // or x =val;  //this is used to specify the current object (this is a pointer hence ->)
    }
};

int main(int argc, char const *argv[])
{
    Base b1; // object created

    // cout << b1.x << endl; // throws error as x is private

    cout << b1.get() << endl;
    b1.set(100);
    cout << b1.get() << endl;

    return 0;
}
