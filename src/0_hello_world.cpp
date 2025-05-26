#include <iostream>
#include "../include/hello_world.h"
using namespace std;

void say_hello(const std::string& username) {
    cout << "Hello, " << username << "!" << endl;
}

int main() {
    say_hello("caobaoqi1024");
    return 0;
} 