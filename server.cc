#include <iostream>
#include <fstream>
#include "lib/httplib/httplib.h"

#define PORT 8080

using namespace std;
using namespace httplib;

int main(void)
{
    Server server;

    ifstream ifs("assets/server_content.html");
    string server_content(
        (istreambuf_iterator<char>(ifs)),
        (istreambuf_iterator<char>())
    );

    try {
        server.Get("/", [&](const Request& req, Response& res) {
            res.set_content(server_content, "text/html");
        });

        server.listen("localhost", PORT);
        cout << "socket listening on port " << PORT << endl;
    }
    catch (const exception e) {
        cerr << e.what() << endl;
        return -1;
    }
}