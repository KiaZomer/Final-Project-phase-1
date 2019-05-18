#include <iostream>
#include <string>
#include <vector>
#include "netflix.h"

using namespace std;

int main(){
    string line;
    NetflixSystem* netFlix = new NetflixSystem();
    while(getline(cin,line))  netFlix->run(line);
    free(netFlix);
}