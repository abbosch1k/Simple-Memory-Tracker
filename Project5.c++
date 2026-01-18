
#include <iostream>
#include <chrono>
using namespace std;

int main() {
    auto start = chrono::steady_clock::now();
    cout << "Uptime running...\n";
}
