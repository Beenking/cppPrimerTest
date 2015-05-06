#include <iostream>
#include <string>

using namespace std;
using std::cin;
using std::string;



constexpr int fun(){return 1;}

int main(){
    const int ci = 0;
    const auto b = ci;

    auto &r = ci;

  return 0;
}
