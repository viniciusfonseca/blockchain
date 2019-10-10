#include <iostream>
#include "Transaction.hpp"

using namespace std;

Transaction::Builder::Builder() : transaction(transaction) {

    cout << "will create tr ptr" << endl;
    transaction = new Transaction();
    cout << "created" << endl;
}

Transaction::Builder * Transaction::Builder::setSender(string sender) {
    transaction->sender = sender;
    return this;
}

Transaction::Builder * Transaction::Builder::setRecipient(string recipient) {
    transaction->recipient = recipient;
    return this;
}

Transaction::Builder * Transaction::Builder::setAmount(double amount) {
    transaction->amount = amount;
    return this;
}

Transaction * Transaction::Builder::done() {
    return transaction;
}