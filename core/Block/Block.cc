#include "Block.hpp"
#include <vector>
#include "../Transaction/Transaction.hpp"

using namespace std;

Block::Block(
    uint32_t index,
    const string &data,
    uint32_t proof,
    vector<Transaction> transactions,
    string prevHash
) :
    index(index),
    data(data),
    proof(proof),
    transactions(transactions),
    prevHash(prevHash)
{
    nonce = -1;
    timestamp = time(nullptr);
}