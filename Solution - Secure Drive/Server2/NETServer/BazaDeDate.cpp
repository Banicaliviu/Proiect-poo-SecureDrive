#include "BazaDeDate.h"
#include<iostream>
#include<windows.h>
#include<sqlext.h>
#include<sqltypes.h>
#include<sql.h>

using namespace std;

//parametri nume, email, parola
void BazaDate::InsertUserBD(string nume, string email, string parola)
{
    std::string str = "INSERT INTO Users (Nume,Email,Parola) VALUES('";
    str += nume;
    str += "', '";
    str += email;
    str += "', '";
    str += parola;
    str += "')";

    wstring wst(str.length(), L' ');
    copy(str.begin(), str.end(), wst.begin());
    cout << endl;

#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000

    //define handles and variables
    SQLHANDLE sqlConnHandle;
    SQLHANDLE sqlStmtHandle;
    SQLHANDLE sqlEnvHandle;
    SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];

    //initializations
    sqlConnHandle = NULL;
    sqlStmtHandle = NULL;

    //allocations
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
        goto COMPLETED;
    if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
        goto COMPLETED;
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
        goto COMPLETED;
    switch (SQLDriverConnect(sqlConnHandle, NULL, (SQLWCHAR*)L"DRIVER={SQL SERVER}; SERVER=127.0.0.1, 1434; DATABASE=SecureDrive; Trusted=true;", SQL_NTS, retconstring, 1024, NULL, SQL_DRIVER_NOPROMPT))
    {
    case SQL_SUCCESS:
        cout << "Connected to SQL Server";
        cout << "\n";
        break;
    case SQL_SUCCESS_WITH_INFO:
        cout << "Successfully connected to SQL Server";
        cout << "\n";
        break;
    case SQL_INVALID_HANDLE:
        cout << "Could not connect to SQL Server";
        cout << "\n";
        goto COMPLETED;
    case SQL_ERROR:
        cout << "Could not connect to SQL Server";
        cout << "\n";
        goto COMPLETED;
    default:
        break;
    }
    //if there is a problem connecting then exit application
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
        goto COMPLETED;
    //if there is a problem executing the query then exit application
    //else display query result
    if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)wst.c_str(), SQL_NTS))
    {
        
        cout << "Inserare utilizator cu succes" << endl;
        goto COMPLETED;
    }
    else
    {
        SQLCHAR sqlVersion[SQL_RESULT_LEN];
        SQLINTEGER ptrSqlVersion;
    }


COMPLETED:
    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
    SQLDisconnect(sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
}

void BazaDate::LoginUserBD(string nume, string parola)
{

    std::string str = "SELECT Nume, Parola FROM Users";
    str += nume;
    str += "', '";
    str += parola;
    str += "')";

    wstring wst2(str.length(), L' ');
    copy(str.begin(), str.end(), wst2.begin());
    cout << endl;

#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000

    //define handles and variables
    SQLHANDLE sqlConnHandle;
    SQLHANDLE sqlStmtHandle;
    SQLHANDLE sqlEnvHandle;
    SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];

    //initializations
    sqlConnHandle = NULL;
    sqlStmtHandle = NULL;

    //allocations
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
        goto COMPLETED;
    if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
        goto COMPLETED;
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
        goto COMPLETED;
    
    switch (SQLDriverConnect(sqlConnHandle, NULL, (SQLWCHAR*)L"DRIVER={SQL SERVER}; SERVER=127.0.0.1, 1434; DATABASE=SecureDrive; Trusted=true;", SQL_NTS, retconstring, 1024, NULL, SQL_DRIVER_NOPROMPT))
    {
    case SQL_SUCCESS:
        cout << "Connected to SQL Server";
        cout << "\n";
        break;
    case SQL_SUCCESS_WITH_INFO:
        cout << "Successfully connected to SQL Server";
        cout << "\n";
        break;
    case SQL_INVALID_HANDLE:
        cout << "Could not connect to SQL Server";
        cout << "\n";
        goto COMPLETED;
    case SQL_ERROR:
        cout << "Could not connect to SQL Server";
        cout << "\n";
        goto COMPLETED;
    default:
        break;
    }
    //if there is a problem connecting then exit application
    if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
        goto COMPLETED;
    //if there is a problem executing the query then exit application
    //else display query result
    if(SQL_SUCCESS !=SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)wst2.c_str(), SQL_NTS))
    {
        cout << "Login" << endl;
    }
    else
    {
        SQLCHAR sqlVersion[SQL_RESULT_LEN];
        SQLINTEGER ptrSqlVersion;
    }

COMPLETED:
    SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
    SQLDisconnect(sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
    SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);
}