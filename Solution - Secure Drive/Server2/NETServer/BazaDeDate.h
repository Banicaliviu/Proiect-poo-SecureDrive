#pragma once
#include <iostream>
#include <Windows.h>
#include <sqltypes.h>
#include <sql.h>
#include <sqlext.h>
#include <string>
#include <codecvt>
#include <locale>
#include<vector>
#include "Inregistrare.h"

using namespace std;

class BazaDate
{

private:
	static BazaDate* instance;
	BazaDate() {}
	~BazaDate() {}

public:
	vector<Inregistrare> clienti; //vector clienti inregistrati

	static BazaDate& GetInstance();
	void InsertUserBD(string nume, string email, string parola);
	void LoginUserBD(string nume, string parola);
};