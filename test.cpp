#pragma hdrstop
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

#pragma argsused
int main(int argc, char* argv[])
{
    string value = "";
    cout <<"inserte texto: " <<endl;
    cin >>value;
    system ("CLS");
    cout <<"su texto: " <<endl <<value <<endl;
    system ("pause");

        return 0;
}