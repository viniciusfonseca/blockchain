#pragma once

#include <sstream>
#include "Block.hpp"
#include "../../lib/sha256/sha256.hpp"

inline string Block::calculateHash() const {

    stringstream ss;
    ss << index << timestamp << data << nonce << prevHash;

    return sha256(ss.str());
};