#include <iostream>
#include <list>
#include <sstream>

using namespace std;

string pig_it(string str);

string replaceAndReturn(string str);

string pig_it(string str) {
	list<string> words;
	istringstream ist(str);
	string tmp;
	string buffer;
	while (ist >> tmp) {
		buffer = replaceAndReturn(tmp);
		words.push_back(buffer);
	}
	tmp.clear();
	buffer.clear();
	for (string n : words) {
		tmp += n;
	}
	if (tmp[tmp.length() - 1] == ' ') {
		tmp = tmp.erase(tmp.length() - 1, 1);
	}
	return tmp;
}

string replaceAndReturn(string str) {
	string buffer;
	if (!str.empty()) {
		for (int i = 1; i < str.length(); i++) {
			buffer += str.at(i);
		}
	}
	if (str.at(0) == '!' || str.at(0) == '?' || str.at(0) == ',' || str.at(0) == '.') {
		buffer = str + " ";
	}
	else {
		buffer += str.at(0);
		buffer.append("ay ");
	}
	return buffer;
}