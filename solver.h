#ifndef SOLVER_H_INCLUDED
#define SOLVER_H_INCLUDED
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <vector>
#include <list>
#include "parser.h"
using namespace std;

class graph{
        int n;
public:
list<int>*neighbours;
    graph(int);
    ~graph();
    void addEdge(int, int);
    void g_c();
};

class solver{
    parser *el;
   // Graph *g1;
public:
        solver(parser *);

};
#endif // SOLVER_H_INCLUDED
