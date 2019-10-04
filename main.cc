#include <iostream>
#include "core/Blockchain/Blockchain.hpp"

#define BLOCKS_TO_MINE 2048

using namespace std;

int main() {

    Blockchain chain = Blockchain();

    cout << "Mining blocks..." << endl;

    for (uint32_t i = 0; i < BLOCKS_TO_MINE; i++) {
        chain.addBlock("", 1);
    }

    cout << "Blockchain: " << endl;

    chain.print();

    return 0;
}