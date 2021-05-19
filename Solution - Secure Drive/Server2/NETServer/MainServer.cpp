#include<iostream>
#include"BazaDeDate.h"

using namespace std;

int main()
{
	BazaDate& bd = BazaDate::GetInstance();
	bd.InsertUserBD("Razvan", "email@yahoo.com", "parola1234");
	bd.LoginUserBD("Razvan", "parola1234");
	return 0;
}