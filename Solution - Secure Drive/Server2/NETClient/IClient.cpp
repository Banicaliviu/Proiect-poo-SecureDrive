#include<iostream>
#include<string>
#include "IClient.h"


IClient* IClient::instance = nullptr;
IClient* IClient::getInstance(const std::string& host, const uint16_t port)
{
    return nullptr;
}
IClient* IClient::getInstance()
{
    if (!IClient::instance)
    {
        IClient::instance = new IClient();
    }
    return IClient::instance;
}
void IClient::deleteInstance()
{
    if (IClient::instance)
    {
        delete IClient::instance;
        IClient::instance = nullptr;
    }
}

void IClient::PingServer()
{

    olc::net::message<CustomMsgTypes> msg;
    msg.header.id = CustomMsgTypes::ServerPing;

    std::chrono::system_clock::time_point timeNow = std::chrono::system_clock::now();

    msg << timeNow;
    Send(msg);
}
void IClient::MessageAll()
{
    olc::net::message<CustomMsgTypes> msg;
    msg.header.id = CustomMsgTypes::MessageAll;
    Send(msg);
}