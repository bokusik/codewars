#include <vector>
#include <cctype>
#include <string>

using namespace std;

vector<string> wave(string y) {
    vector<string> result;
    for (int i = 0; i < y.size(); i++) {
        string buffer; 
        if (y[i] == ' ') {
            if (i != 0) {
                buffer += (char)tolower(y[i - 1]);
                y.replace(i - 1, 1, buffer);
                buffer.clear();
                continue;
            }
            continue;
        }
        buffer += (char)toupper(y[i]);
        y.replace(i, 1, buffer);
        buffer.clear();
        if (i > 0) {
            buffer += (char)tolower(y[i - 1]);
            y.replace(i - 1, 1, buffer);
            buffer.clear();
        }
        result.push_back(y);
    }
    return result;
}