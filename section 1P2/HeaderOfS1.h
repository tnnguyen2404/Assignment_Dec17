class URL {
		
	public:
		std::string scheme, authority, path;
		URL(std::string url);
		string getScheme();
		string getAuthority();
		string getPath();
		string getCompletedURL();

};