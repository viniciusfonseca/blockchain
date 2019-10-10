#include <sstream>
#include "Blockchain.hpp"

string Blockchain::toJSON() {
    stringstream ss;

    ss << "[";

    for_each(
        chain.begin(),
        chain.end(),
        [&ss, sep=','](Block * block) mutable {
            ss << block->toJSON();
        });

    ss << "]";

    return ss.str();
}