#include "../headers/Token.h"

Token::Token(string type, string termType, string value, int line, int position) {
    this->typ = type;
    this->termType = termType;
    this->value = value;
    this->line = line;
    this->position = position;
}

string Token::__str__() {


    return "Token(" + this->typ + ")";
}
