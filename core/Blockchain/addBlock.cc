#include "Blockchain.hpp"

void Blockchain::addBlock(string data, uint32_t proof) {
    string prevHash = getLastBlock()->getHash();
    Block * block = Block::Builder()
        .setIndex(chain.size())
        .setData(data)
        .setProof(proof)
        .setTransactions(current_transactions)
        .setPrevHash(prevHash)
        .done();
    current_transactions = vector<Transaction *>();
    block->mine(difficulty);
    chain.push_back(block);
    if (chain.size() > block_halving_cap) {
        doHalving();
    }
};