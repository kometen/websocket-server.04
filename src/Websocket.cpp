/*
 * Websocket.cpp
 *
 *  Created on: 01/02/2016
 *      Author: claus
 */

#include "Websocket.hpp"

Websocket::Websocket() : port{8001} {
    print_server.init_asio();
    print_server.set_message_handler(bind(&Websocket::on_message, this, ::_1, ::_2));
}

Websocket::Websocket(unsigned int p) : port{p} {
    print_server.init_asio();
    print_server.set_message_handler(bind(&Websocket::on_message, this, ::_1, ::_2));
}

Websocket::~Websocket() {
    // TODO Auto-generated destructor stub
}

void Websocket::run() {
    print_server.listen(port);
    print_server.start_accept();
    print_server.run();
}

void Websocket::on_message(websocketpp::connection_hdl hdl, server::message_ptr msg) {
    std::cout << msg->get_payload() << std::endl;
}
