#include "Block.hpp"
#include "../Transaction/Transaction.hpp"

Block::Builder::Builder() : block(block) {
    this->block = new Block();
}

Block::Builder Block::Builder::setIndex(uint32_t index) {
    block->index = index;
    return *this;
}

Block::Builder Block::Builder::setPrevHash(string prevHash) {
    block->prevHash = prevHash;
    return *this;
}

Block::Builder Block::Builder::setProof(uint32_t proof) {
    block->proof = proof;
    return *this;
}

Block::Builder Block::Builder::setData(const string & data) {
    block->data = data;
    return *this;
}

Block::Builder Block::Builder::setTransactions(vector<Transaction> transactions) {
    block->transactions = transactions;
    return *this;
}

Block * Block::Builder::done() {
    return block;
}