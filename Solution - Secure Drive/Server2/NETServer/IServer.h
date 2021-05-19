#pragma once
#include <iostream>
#include "olc_net.h"
#include <nlohmann/json.hpp>

enum class CustomMsgTypes : uint32_t
{
    ServerAccept,
    SendReg,
    AcceptReg,
    DenyReg,
    ServerDeny,
    ServerPing,
    MessageAll,
    ServerMessage,
};


class IServer : public olc::net::server_interface<CustomMsgTypes>
{

public:
    static IServer* getInstance(uint16_t nPort);
    //static IServer  getInstance();
    static void deleteInstance();
    //BazaDate getBazaDate();
    //BazaDate getBazaDate();//TO DO functia in bazadate

private:
    virtual bool OnClientConnect(std::shared_ptr<olc::net::connection<CustomMsgTypes>> client);
    virtual void OnClientDisconnect(std::shared_ptr<olc::net::connection<CustomMsgTypes>> client);
    virtual void OnMessage(std::shared_ptr<olc::net::connection<CustomMsgTypes>> client, olc::net::message<CustomMsgTypes>& msg);
    //void RegistrerUser(std::string json);

    //IServer() {};
    //IServer(const IServer&) {};
    static IServer *instance;
    IServer(uint16_t nPort) : olc::net::server_interface<CustomMsgTypes>(nPort) {};
    ~IServer() {};
    //BAZADATE BD
};

