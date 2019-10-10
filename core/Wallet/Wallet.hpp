#pragma once

#include <iostream>

using namespace std;

class Wallet {

    public:
        Wallet(string address);
        string address;

    private:
        double amount;
};