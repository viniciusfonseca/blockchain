#include "Blockchain.hpp"

#include "../Transaction/Transaction.hpp"

uint32_t Blockchain::addTransaction(
    string sender, 
    string recipient,
    double amount) {

    cout << "will create tr" << endl;

    Transaction::Builder * tx = new Transaction::Builder();

    Transaction * transaction = tx
        ->setSender(sender)
        ->setRecipient(recipient)
        ->setAmount(amount)
        ->done();

    cout << "created 2" << endl;

    current_transactions.push_back(transaction);

    return getLastBlock()->index + 1;
}