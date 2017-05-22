//
// Created by Matt Rauch on 2017-05-04.
//

#ifndef MR_TOKEN_H
#define MR_TOKEN_H

#endif //MR_TOKEN_H

#include <string>
using namespace std;

class Token {
private:
    string typ;
    string termType;
    string value;

    int line;
    int position;

public:
    Token() {};
    Token(string type, string termType, string value, int line, int position);



    string __str__();


};


