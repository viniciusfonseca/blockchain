#include <sstream>
#include "Blockchain.hpp"

string Blockchain::toJSON() {
    stringstream ss;

    ss << "[";

    for_each(
        chain.begin(),
        chain.end(),
        [&ss, sep=""](Block * block) mutable {
            ss << sep << block->toJSON(); sep = ",";
        });

    ss << "]";

    return ss.str();
}