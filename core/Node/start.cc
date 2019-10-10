#include <iostream>
#include <fstream>
#include "Node.hpp"
#include "../../lib/httplib/httplib.h"
#include <pthread.h>

#define PORT 8080

// TODO: Make the server run in a separate thread.

using namespace std;
using namespace httplib;

struct run_server_args_t {
    Server &server;
};

void * __thread_run_server(void *args) {
    struct run_server_args_t * args_struct = (struct run_server_args_t *) args;
    args_struct->server.listen("localhost", PORT);
    // pthread_exit(0);
    // exit(0);
    return NULL;
}

void Node::start() {

    uint32_t thread_rc;
    run_server_args_t thr_args = { .server = server };

    try {
        server.Get("/", [&](const Request& req, Response& res) {
            ifstream ifs("assets/server_content.html");
            string server_content(
                (istreambuf_iterator<char>(ifs)),
                (istreambuf_iterator<char>())
            );
            res.set_content(server_content, "text/html");
        });

        server.Get("/chain", [&](const Request& req, Response& res) {
            res.set_content(chain->toJSON(), "application/json");
        });

        server.Get(R"(/chain/(\w+))", [&](const Request& req, Response& res) {
            string hash = req.matches[1];
            
        });

        server.Post("/mine", [&](const Request& req, Response& res) {

        });

        server.Post("/transactions", [&](const Request& req, Response &res) {

        });

        server.listen("localhost", PORT);

        // thread_rc = pthread_create(
        //     &server_thread,
        //     (const pthread_attr_t *)(0),
        //     __thread_run_server,
        //     (void *) &thr_args);

        // if (thread_rc) {
        //     cerr << "Error: unable to create thread (" << thread_rc << ")" << endl;
        //     throw exception();
        // }

        cout << "socket listening on port " << PORT << endl;
    }
    catch (const exception e) {
        cerr << e.what() << endl;
    }
};