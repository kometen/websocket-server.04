/*
 * Websocket.hpp
 *
 *  Created on: 01/02/2016
 *      Author: claus
 */

#ifndef WEBSOCKET_HPP_
#define WEBSOCKET_HPP_

#include <iostream>
#include <websocketpp/config/asio_no_tls.hpp>
#include <websocketpp/server.hpp>

typedef websocketpp::server<websocketpp::config::asio> server;

using websocketpp::connection_hdl;
using websocketpp::lib::bind;
using websocketpp::lib::placeholders::_1;
using websocketpp::lib::placeholders::_2;

class Websocket {
private:
    server print_server;
    unsigned int port;

public:
    Websocket();
    Websocket(unsigned int);
    virtual ~Websocket();
    void run();
    void on_message(websocketpp::connection_hdl, server::message_ptr);
};

#endif /* WEBSOCKET_HPP_ */
