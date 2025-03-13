#include <iostream>
#include <conio.h>
#include "hasp.h"

using namespace std;

int main(int argc, char** argv) {
    int par1, par2, par3, par4;
    hasp(1, 0, 0, 0, 0, &par1, &par2, &par3, &par4);
    if (par1) {
        cout << "HASP is here" << endl;
        hasp(5, 0, 0, 0, 0, &par1, &par2, &par3, &par4);
        cout << "Available memory size is " << par1 << endl;
        cout << "HASP type is " << par2 << endl;
        cout << "LPT port is " << par3 << endl;
        cout << "API version is " << par4 << endl; 
    } else {
        cout << "No HASP for you" << endl;
    }
    getch();
    return 0;
}
