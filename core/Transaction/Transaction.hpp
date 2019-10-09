#pragma once

#include "../Wallet/Wallet.hpp"

class Transaction {

    public:
        Transaction(Wallet sender, Wallet recipient, double amount);
        
        class Builder {
            public:
                Builder();
                Builder setSender(Wallet sender);
                Builder setRecipient(Wallet recipient);
                Builder setAmount(double amount);
                Transaction done();
            private:
                Transaction & transaction;
        };

    private:
        Wallet sender;
        Wallet recipient;
        double amount;
};