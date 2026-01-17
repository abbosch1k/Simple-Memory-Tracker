#include <iostream>
#include <thread>
using namespace std;

void work() {
    cout << "Thread running\n";
}

int main() {
    thread t(work);
    t.join();
}
