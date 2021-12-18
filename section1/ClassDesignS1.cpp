#include <iostream>
#include <string>
#include "Header1.h"

using std::cout;
using std::endl;
using std::cin;




int main()
{
	std::string newUrl;

	cout << "Please enter a URL: ";
	cin >> newUrl;
	URL u(newUrl);
	cout << "Scheme: " << u.getScheme() << endl;
	cout << "Authority: " << u.getAuthority() << endl;
	cout << "Path: " << u.getPath() << endl;
	cout << "Completed URL: " << u.getCompletedURL() << endl;

	return 0;

}

