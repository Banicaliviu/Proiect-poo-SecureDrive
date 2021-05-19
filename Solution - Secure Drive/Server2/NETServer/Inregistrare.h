#pragma once
#include<iostream>
using namespace std;

class Inregistrare
{

public: 
	string nume, parola, email;
	Inregistrare(string nume, string parola, string email) :nume(nume), parola(parola), email(email) {};
	~Inregistrare() {}
};

