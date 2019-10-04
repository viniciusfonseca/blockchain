#include "Blockchain.hpp"

void Blockchain::doHalving() {
    block_reward /= 2;
    block_halving_cap += block_halving_cap / 2;
    difficulty++;

    cout << "Block size have been halved!" << endl;
    cout << "Block quantity cap is now " << block_halving_cap << endl;
    cout << "Difficulty is now " << difficulty << "." << endl;
}