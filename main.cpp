#include <iostream>
#include "CSolution.h"
#include "CRuntime.h"


using namespace std;

int main() {
    cout << "Hello, World!" << std::endl;
    CRuntime* runtime = new CRuntime;
    runtime->maintain();
    runtime->run();
    delete runtime;
    return 0;
}
