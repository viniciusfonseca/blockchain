#include "Blockchain.hpp"

#include "../Transaction/Transaction.hpp"

uint32_t Blockchain::addTransaction(
    string sender, 
    string recipient,
    double amount) {

    Transaction * transaction = Transaction::Builder()
        .setSender(sender)
        .setRecipient(recipient)
        .setAmount(amount)
        .done();

    current_transactions.push_back(transaction);

    return getLastBlock()->index + 1;
}