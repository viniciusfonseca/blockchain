#include "Blockchain.hpp"

using namespace std;

Blockchain::Blockchain() {
    chain.emplace_back(Block(0, __GENESIS_IDENTIFIER, 1, vector<Transaction>(), ""));
    difficulty = __STARTING_DIFFICULTY;
    block_reward = __INIT_BLOCK_REWARD;
    block_halving_cap = __INIT_BLOCK_HALVING_CAP;
};