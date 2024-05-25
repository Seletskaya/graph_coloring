#ifndef PARSER_H_INCLUDED
#define PARSER_H_INCLUDED
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <iostream>
#include <time.h>
#include <vector>
using namespace std;


class parser {
	string filename;
	ifstream file;
public:
    int n,k,B_size;
    vector <int> v;
    vector <int> w;
    parser(const string&);
    void parser_f();
    ~parser();
};



#endif // PARSER_H_INCLUDED
