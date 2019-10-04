#include "Blockchain.hpp"

void Blockchain::addBlock(string data, uint32_t proof) {
    string prevHash = getLastBlock().getHash();
    Block block = Block(
        chain.size(),
        data,
        proof,
        current_transactions,
        prevHash);
    current_transactions = vector<Transaction>();
    block.mine(difficulty);
    chain.push_back(block);
    if (chain.size() > block_halving_cap) {
        doHalving();
    }
};