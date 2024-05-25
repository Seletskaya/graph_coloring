#include "parser.h"
using namespace std;

parser::parser(const string& s):filename (s){
    //cout<<"parser srart"<<endl;
    n=0;//кол-во вершин в графе
    k=0;//кол-во рёбер в графе
}

void parser::parser_f (){
  int i;
  B_size = 0;
  file.open (filename);
    if(!file.is_open()){
        cout<<"The file is not opened"<<endl;
    }
    string s,s1;
    getline (file, s,' ');
    n = stoi(s);//vertex
    cout<<"n:"<<n<<endl;
    getline (file, s);
    k = stoi(s);//ribs
    cout<<"k:"<<k<<endl;
    int m,l,vert = 0,r = 0;
    for (i = 0; i < k; i++){
      getline (file, s,' ');
      getline (file, s1);
      l = stoi(s);
      v.push_back(l);
      m = stoi(s1);
      w.push_back(m);
    }
  file.close();
  return;
}

parser::~parser (){
  if (file.is_open ()){
      file.close ();
    }
    v.clear();
    w.clear();
}




