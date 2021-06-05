#include <iostream>
#include <string>
#include <ctime>
#include <stdafx>
#include <sapi.h>
using namespace std;
int main(int argc, char* argv[])
{
std::string Response[] = {
"HELLO",
"HOW ARE YOU?",
"BYE.",
"AWSOME."
};

srand((unsigned) time(NULL));

std::string sInput = "";
std::string sResponse = "";

while(1) {
std::cout << ">";
std::getline(std::cin, sInput);
int nSelection = rand() % 5;
sResponse = Response[nSelection];
std::cout << sResponse << std::endl;
}

return 0;
}
