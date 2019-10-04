#include "Blockchain.hpp"

#include "../Transaction/Transaction.hpp"

uint32_t Blockchain::addTransaction(
    Wallet sender, 
    Wallet recipient,
    double amount) {

    Transaction transaction = Transaction(sender, recipient, amount);

    current_transactions.push_back(transaction);

    return getLastBlock().index + 1;
}