#include<iostream>
#include<string>
#include "IServer.h"
#include"BazaDeDate.h"

IServer* IServer::instance = nullptr;
IServer* IServer::getInstance(uint16_t nPort)
{
	return nullptr;
}

BazaDate* BazaDate::instance = nullptr;
BazaDate& BazaDate::GetInstance()
{
	if (instance == NULL)
		instance = new BazaDate;
	return *instance;
}

void IServer::deleteInstance()
{
	if (IServer::instance)
	{
		delete IServer::instance;
		IServer::instance = nullptr;
	}
}

bool IServer::OnClientConnect(std::shared_ptr<olc::net::connection<CustomMsgTypes>> client)
{
	olc::net::message<CustomMsgTypes> msg;
	msg.header.id = CustomMsgTypes::ServerAccept;
	client->Send(msg);
	return true;

}

void IServer::OnClientDisconnect(std::shared_ptr<olc::net::connection<CustomMsgTypes>> client)
{
	cout << "Removing client [" << client->GetID() << "]\n";
}

void IServer::OnMessage(std::shared_ptr<olc::net::connection<CustomMsgTypes>> client, olc::net::message<CustomMsgTypes>& msg)
{
	switch (msg.header.id)
	{
	case CustomMsgTypes::SendReg:
	{
		cout << "Sending registration\n";
		string(msg.body.begin(), msg.body.end());
		client->Send(msg);
	}
	break;

	case CustomMsgTypes::MessageAll:
	{
		olc::net::message<CustomMsgTypes> msg;
		msg.header.id = CustomMsgTypes::ServerMessage;
		msg << client->GetID();
		MessageAllClients(msg, client);
	}
	break;

	case CustomMsgTypes::AcceptReg:
	{
		olc::net::message<CustomMsgTypes> msg;
		msg.header.id = CustomMsgTypes::ServerAccept;
		msg << client->GetID();
	}
	break;
	//case trimite inregistrare
		//true -> accept(enum) ->client->mesaj();
		//false -> refuz(enum) -> client->mesaj();
	}
}


//functie inregistrare user bool(instanta bd, insert cu nume, email, parola)
