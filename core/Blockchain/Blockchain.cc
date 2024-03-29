#include "Blockchain.hpp"

using namespace std;

Blockchain::Blockchain() {
    difficulty = __STARTING_DIFFICULTY;
    block_reward = __INIT_BLOCK_REWARD;
    block_halving_cap = __INIT_BLOCK_HALVING_CAP;
    current_transactions = vector<Transaction *>();
    chain = vector<Block *>();
    Block * genesis_block = (
        (new Block::Builder())
            ->setIndex(0)
            ->setData(__GENESIS_IDENTIFIER)
            ->setProof(100)
            ->setTransactions(vector<Transaction *>())
            ->setPrevHash("")
            ->done()
    );
    genesis_block->mine(difficulty);
    chain.emplace_back(genesis_block);
};