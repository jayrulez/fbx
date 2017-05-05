#include <stdint.h>
#include <iostream>
#include <string>

#include "fbxdocument.h"
using std::cout;
using std::cerr;
using std::endl;
using std::string;

int main(int argc, char** argv) {
    if(argc < 2) {
        cerr << "Specify file which you want to dump" << endl;
        return 1;
    }

    try {
        fbx::FBXDocument d;
        d.read(argv[1]);

        d.print();

    } catch(string s) {
        cerr << "ERROR: " << s << endl;
        return 2;
    }
    return 0;
}
