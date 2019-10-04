#pragma once

#include "../Wallet/Wallet.hpp"

class Transaction {

    public:
        Transaction(Wallet, Wallet, double);

    private:
        Wallet sender;
        Wallet recipient;
        double amount;
};