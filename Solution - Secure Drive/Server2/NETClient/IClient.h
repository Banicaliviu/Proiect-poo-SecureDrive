#pragma once
#include <iostream>
#include "olc_net.h"
#include <nlohmann/json.hpp>

enum class CustomMsgTypes : uint32_t
{
    ServerAccept,
    SendReq,
    ServerDeny,
    ServerPing,
    MessageAll,
    ServerMessage,
};

class IClient :public olc::net::client_interface<CustomMsgTypes>
{

public:

    static IClient* getInstance(const std::string& host, const uint16_t port);
    static IClient* getInstance();
    void deleteInstance();

private:
    void PingServer();
    void MessageAll();
    static IClient* instance;
    ~IClient() {};
};