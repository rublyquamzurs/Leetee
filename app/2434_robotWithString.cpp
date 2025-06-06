#include "CSolution.h"

static std::string robotWithString(std::string s) {
    return "ok";
}

void RunRobotWithString() {
    std::string s = "zza";
    std::string result = robotWithString(s);
    std::cout << result << std::endl;  // Expected output: "azz"
}