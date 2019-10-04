#include "Block.hpp"
#include "../Blockchain/Blockchain.hpp"

extern Blockchain chain;

void Block::mine(uint32_t difficulty) {

    string str(difficulty, '0');

    do {
        nonce++;
        hash = calculateHash();
    } while (hash.substr(0, difficulty) != str);

    // cout << "Block mined after " << (nonce + 2) << " hashes: " << hash << endl;
}