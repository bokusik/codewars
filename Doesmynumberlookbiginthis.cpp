#include <string>
#include <cmath>

using namespace std;
bool narcissistic(int value) {
    string str = to_string(value);
    int result = 0;
    for (int i = 0; i < str.size(); i++) {
        int buffer = (int)str.at(i) - 48;
        result += pow(buffer, str.size());
    }
    if (result == value) {
        return true;
    }
    return false;
}