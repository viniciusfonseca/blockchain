#pragma once

#include <iostream>

using namespace std;

class Wallet {

    public:
        Wallet(string address);

    private:
        string address;
        double amount;
};