#include <iostream>
#include "mult.h"
using namespace std;


int main(int argc, char* argv[]){
    if (argc != 3){
        cout << "Need two arguments" << endl;
        return 1;
    }
    float a = atof(argv[1]);
    float b = atof(argv[2]);
    cout << mult(a,b) << endl;
}