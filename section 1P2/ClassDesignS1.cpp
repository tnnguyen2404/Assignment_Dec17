#include <iostream>
#include <string>
#include "HeaderOfS1.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

URL::URL(string url) {
	int pos, pos2, pos3, num;
	pos = url.find(":");

	for (int i = 0; i < url.size(); i++) {
		if (url[i] == '/' && url[i + 1] == '/') {
			pos2 = i;
			i++;
		}
		else if (url[i] == '/' && url[i + 1] != '/') {
			pos3 = i;
			break;
		}
	}

	scheme = url.substr(0, pos + 1);

	num = ((url.size() - pos) - (url.size() - pos3)) - 1;
	authority = url.substr(pos2, num);

	path = url.substr(pos3);
}

string URL::getScheme() {
	return scheme;
}

string URL::getAuthority() {
	return authority;
}

string URL::getPath() {
	return path;
}

string URL::getCompletedURL() {
	return scheme + authority + path;
}


int main()
{
	string newUrl;

	cout << "Please enter a URL: ";
	cin >> newUrl;
	URL u(newUrl);
	cout << "Scheme: " << u.getScheme() << endl;
	cout << "Authority: " << u.getAuthority() << endl;
	cout << "Path: " << u.getPath() << endl;
	cout << "Completed URL: " << u.getCompletedURL() << endl;

	return 0;

}

