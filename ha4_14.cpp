#include <iostream>
#include <cmath>
#include <format>

using namespace std;

int main() {
    long double x = (powl(10.001, 345) * powl(13.001, 249) /( powl(9.001, 355) * powl(11.001,269)));
    cout << format("{:.5f}\n", x);

    return 0;
}