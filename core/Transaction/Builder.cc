#include <iostream>
#include <memory>
#include "Transaction.hpp"

using namespace std;

Transaction::Builder::Builder() {

    cout << "will create tr ptr" << endl;
    unique_ptr<Transaction> ptr_tx(new Transaction);
    // transaction = new Transaction();
    transaction = ptr_tx.release();
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