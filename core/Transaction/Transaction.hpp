#pragma once

#include <string>

using namespace std;

class Transaction {

    public:
        Transaction();
        
        class Builder {
            public:
                Builder();
                Builder * setSender(string sender);
                Builder * setRecipient(string recipient);
                Builder * setAmount(double amount);
                Transaction * done();
            private:
                Transaction * transaction;
        };
        string toJSON();

    private:
        string sender;
        string recipient;
        double amount;
};