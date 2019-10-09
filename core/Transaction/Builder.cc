#include "Transaction.hpp"
#include "../Wallet/Wallet.hpp"

Transaction::Builder::Builder() : transaction(transaction) {}

Transaction::Builder Transaction::Builder::setSender(Wallet sender) {
    transaction.sender = sender;
    return *this;
}

Transaction::Builder Transaction::Builder::setRecipient(Wallet recipient) {
    transaction.recipient = recipient;
    return *this;
}

Transaction::Builder Transaction::Builder::setAmount(double amount) {
    transaction.amount = amount;
    return *this;
}

Transaction Transaction::Builder::done() {
    return transaction;
}