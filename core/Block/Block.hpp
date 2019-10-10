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

        Block();

        class Builder {
            public:
                Builder();
                Block::Builder setIndex(uint32_t index);
                Block::Builder setPrevHash(string prevHash);
                Block::Builder setProof(uint32_t proof);
                Block::Builder setTransactions(vector<Transaction> transactions);
                Block::Builder setData(const string &data);
                Block * done();
            private:
                Block * block;
        };

        string getHash();
        string toJSON();
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