#include "Block.hpp"
#include <sstream>
#include <string>

using namespace std;

string join_transactions(vector<Transaction> transactions) {
    stringstream ss;

    ss << "[";

    for (
        vector<Transaction>::iterator it = transactions.begin();
        it != transactions.end();
        ++it, ss << ",") {
        ss << it->toJSON();
    }

    ss << "]";

    return ss.str();
}

string Block::toJSON() {
    stringstream ss;

    string transactions = join_transactions(this->transactions);

    ss  << "{"
            << R"("hash":)" << hash << R"(",)"
            << R"("index":)" << index << R"(,)"
            << R"("data":")" << data << R"(",)"
            << R"("proof":)" << proof << R"(,)"
            << R"("transactions":)" << transactions
        << "}";

    return ss.str();
}