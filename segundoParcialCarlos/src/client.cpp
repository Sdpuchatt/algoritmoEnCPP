#include <string>
//#include "../include/cliente.hpp"
#include "client.hpp"
using namespace std;

Client::Client(string _code, string _name, string _surname, string _address)

{
    this->code = _code;
    this->name = _name;
    this->surname = _surname;
    this->address = _address;
};

string Client::getCode()
    {
        return this->code;
    }

string Client::getName()
    {
        return this->name;
    }

string Client::getSurname()
    {
        return this->surname;
    }

string Client::getAddress()
    {
        return this->address;
    }