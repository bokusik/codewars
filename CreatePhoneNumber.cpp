#include <string>

using namespace std;
string createPhoneNumber(const int arr [10]){
    string result;
    string buffer;
    result = result.append("(");
    for (int i = 0; i < 3; i++) {
        buffer = to_string(arr[i]);
        result.append(buffer);
    }
    result.append(") ");

    for (int i = 3; i < 6; i++) {
        buffer = to_string(arr[i]);
        result.append(buffer);
    }
    result.append("-");

    for (int i = 6; i < 10; i++) {
        buffer = to_string(arr[i]);
        result.append(buffer);
    }
    return result;
}