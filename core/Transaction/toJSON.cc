#include <sstream>
#include "Transaction.hpp"

string Transaction::toJSON() {
    stringstream ss;

    ss  << "{"
            << R"("sender": ")"     << sender       << R"(",)"
            << R"("recipient": ")"  << recipient    << R"(",)"
            << R"("amount": )"      << amount       << ""
        << "}";

    return ss.str();
}