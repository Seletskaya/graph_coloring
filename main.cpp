#include <iostream>
#include "solver.h"

using namespace std;

int main(){
    parser P("gc_20_1.txt");
    P.parser_f();
    solver S(&P);
    return 0;
}
