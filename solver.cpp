#include "solver.h"
using namespace std;

solver::solver(parser*p):el(p){
        int i,N = el->n;
        graph g1(N);
        for (i = 0;i<N;i++){
                g1.addEdge(el->v[i],el->w[i]);
        }
        g1.g_c();
}

graph::graph(int N){
        this->n = N;
        neighbours = new list<int>[n];
}

void graph::addEdge(int v, int w){// undirected
        neighbours[v].push_back(w);
        neighbours[w].push_back(v);
return;
}

void graph::g_c(){
        int colours[n],j,k;
        bool a[n];
        colours[0]  = 0;
        for (j = 1; j < n; j++){
                colours[j] = -1;
                a[j] = false;
        }
        for (j = 1; j < n; j++){
                list<int>::iterator i;//index
                for (i = neighbours[j].begin(); i != neighbours[j].end(); ++i){
                        if (colours[*i] != -1){
                                a[colours[*i]] = true;
                        }
                }
                k=0;
                while((a[k] == true) && (k<n)){
                        k++;
                }
                colours[j] = k;
                for (i = neighbours[j].begin(); i != neighbours[j].end(); ++i){
                        if (colours[*i] != -1){
                                a[colours[*i]] = false;
                        }
                }
        }
        cout << "colours: ";
        for (j = 0; j < n; j++){
        cout<<colours[j]<<" ";
        }
        return;
}

graph::~graph(){
        delete [] neighbours;
}
