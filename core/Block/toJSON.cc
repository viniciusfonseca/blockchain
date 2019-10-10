#include "Block.hpp"
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string join_transactions(vector<Transaction *> transactions) {
    stringstream ss;

    ss << "[";

    for_each(
        transactions.begin(),
        transactions.end(),
        [&ss, sep=""](Transaction * transaction) mutable {
            ss << sep << transaction->toJSON(); sep = "";
        });

    ss << "]";

    return ss.str();
}

string Block::toJSON() {
    stringstream ss;

    string transactions = join_transactions(this->transactions);

    ss  << "{"
            << R"("prev_hash":")"   << prevHash     << R"(",)"
            << R"("hash":")"        << hash         << R"(",)"
            << R"("index":)"        << index        << R"(,)"
            << R"("data":")"        << data         << R"(",)"
            << R"("proof":)"        << proof        << R"(,)"
            << R"("transactions":)" << transactions << ""
        << "}";

    return ss.str();
}