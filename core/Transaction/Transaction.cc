#include "Transaction.hpp"
#include "../Wallet/Wallet.hpp"

Transaction::Transaction(
    Wallet sender, 
    Wallet recipient, 
    double amount) :
    sender(sender), 
    recipient(recipient),
    amount(amount)
{

};