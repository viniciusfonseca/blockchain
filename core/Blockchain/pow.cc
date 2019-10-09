#include "Blockchain.hpp"

uint32_t Blockchain::pow(uint32_t last_proof) {

    uint32_t proof = 0;
    for (; !validateProof(last_proof, proof); proof++);

    return proof;
}