#pragma once

#include <cstdint>
#include <vector>

#include "../Block/Block.hpp"
#include "../Node/Node.hpp"
#include "../Transaction/Transaction.hpp"

#define __GENESIS_IDENTIFIER "__GENESIS__"
#define __STARTING_DIFFICULTY 1

#define __INIT_BLOCK_HALVING_CAP 1 << 10
#define __INIT_BLOCK_REWARD      1 << 5

using namespace std;

class Blockchain {
    public:
        Blockchain();
        double block_reward;

        void addBlock(string data, uint32_t proof);
        void doHalving();
        void print();
        uint32_t addTransaction(
            string sender,
            string recipient,
            double amount
        );
        string toJSON();
        Block * getLastBlock() const;

    private:
        uint32_t difficulty;
        vector<Block *> chain;
        // vector<Node> network;
        vector<Transaction *> current_transactions;
        double block_halving_cap;
};