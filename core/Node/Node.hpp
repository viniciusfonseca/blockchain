#pragma once

#include <iostream>
#include <pthread.h>
#include "../Blockchain/Blockchain.hpp"
#include "../../lib/httplib/httplib.h"

using namespace std;
using namespace httplib;

class Blockchain;

class Node {
    
    public:
        Node();
        void start();

    private:
        bool mining = false;
        Blockchain * chain = nullptr;
        Server server;
        pthread_t server_thread;
        string ip;
        string id;
};