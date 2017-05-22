/* Created by Matt Rauch on 2017-05-04.
    Uses table predictive parsing (top-down)

*/

#include <string>
using namespace std;

#include "Token.h"
#include "Lexer.h"

#ifndef MR_PARSER_H
#define MR_PARSER_H

#endif //MR_PARSER_H


class Parser {
private:
    string filename;
    string text;

    int pos;
    Token current_token;

public:
    Parser(){};
    Parser(string filename);



};
