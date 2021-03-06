class URL {
	private:
	std::string scheme, authority, path;
	public:
	URL(std::string url) {
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

	std::string getScheme() {
		return scheme;
	}

	std::string getAuthority() {
		return authority;
	}

	std::string getPath() {
		return path;
	}

	std::string getCompletedURL() {
		return scheme + authority + path;
	}
};