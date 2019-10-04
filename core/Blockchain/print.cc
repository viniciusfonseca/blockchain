#include "Blockchain.hpp"

void Blockchain::print() {
    Block block = getLastBlock();
    while (true) {
        cout << ">> " << block.getHash() << endl;
        if (block.prevHash.compare("") == 0) { break; }
        for (uint32_t i = 0; i < chain.size(); i++) {
            if (block.prevHash.compare(chain[i].getHash()) == 0) {
                block = chain[i];
                break;
            }
        }
    };
}