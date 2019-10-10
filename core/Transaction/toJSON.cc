#include <sstream>
#include "Transaction.hpp"

string Transaction::toJSON() {
    stringstream ss;

    ss  << "{"
            << R"("sender": ")" << sender.address << R"(",)"
            << R"("recipient": ")" << recipient.address << R"(",)"
            << R"("amount": )" << amount << ""
        << "}";

    return ss.str();
}