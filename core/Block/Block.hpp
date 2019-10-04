#pragma once

#include <cstdint>
#include <iostream>
#include <vector>

#include "../Transaction/Transaction.hpp"
#include "../Wallet/Wallet.hpp"

using namespace std;

class Block {
    public:
        uint32_t index;
        string prevHash;
        uint32_t proof;

        Block(
            uint32_t,
            const string &,
            uint32_t,
            vector<Transaction>,
            string
        );

        string getHash();
        void mine(uint32_t difficulty);
        
    private:
        int64_t nonce;
        string data;
        string hash;
        time_t timestamp;
        vector<Transaction> transactions;
        string calculateHash() const;
};

#include "calculateHash.hpp"