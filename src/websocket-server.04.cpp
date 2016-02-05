//============================================================================
// Name        : 04.cpp
// Author      : Claus Guttesen
// Version     :
// Copyright   : A websocket-server using MS GSL
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <GSL/include/gsl.h>

#include "Websocket.hpp"

typedef websocketpp::server<websocketpp::config::asio> server;

void on_message(websocketpp::connection_hdl hdl, server::message_ptr msg) {
    std::cout << msg->get_payload() << std::endl;
}

using namespace std;

int main() {
	cout << "Blåbærsyltetøj" << endl;
	Websocket ws;
	ws.run();

	return 0;
}
