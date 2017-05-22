

#include "../headers/Parser.h"

Parser::Parser(string filename) {
    //open file and read in up to X characters

    this->current_token = Token("", "", "", 0, 0);
}
