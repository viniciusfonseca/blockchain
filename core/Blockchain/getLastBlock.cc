#include "Blockchain.hpp"

Block Blockchain::getLastBlock() const {
    return chain.back();
}