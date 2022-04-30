#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/*
  Visto en https://gist.github.com/kaspian-xz/27bdba3f9f8a4628706607a3ce64d07f
  Author: https://gist.github.com/kaspian-xz
*/

class UrlParser {
public:
	UrlParser(string url) {
		// Protocol
		size_t index = url.find("://");
		if (index == string::npos) {
			proto = "http://";
		} else {
			proto = url.substr(0, index + 3);
			toLowerCase(proto);
		}

		size_t hostStartIndex = this->hostStartIndex(url);

		// Port
		size_t portStartIndex = this->portStartIndex(url);
		if (portStartIndex == string::npos) {
			port = this->getPortByProtocol(proto);
		} else {
			int from = portStartIndex + 1;
			int pathStartIndex = this->pathStartIndex(url, hostStartIndex);
			port = stoi(url.substr(from, pathStartIndex - from));
		}

		// Host
		size_t hostEndIndex = portStartIndex;
		if (hostEndIndex == string::npos) {
			hostEndIndex = pathStartIndex(url, hostStartIndex);
		}
		host = url.substr(hostStartIndex, hostEndIndex - hostStartIndex);

		// Path
		size_t pathStart = pathStartIndex(url, hostStartIndex);
		if (pathStart == string::npos) {
			path = "/";
		} else {
			path = url.substr(pathStart, url.length() - pathStart);
		}
	}

	string getProto() {
		return proto;
	}

	string getHost() {
		return host;
	}

	int getPort() {
		return port;
	}

	string getPath() {
		return path;
	}

private:
	string proto;
	string host;
	int port;
	string path;

	void toLowerCase(string &str) {
		transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
			return tolower(c);
		});
	}

	size_t hostStartIndex(string &url) {
		size_t result = url.find("://");
		if (result == string::npos) {
			return 0;
		} else {
			return result + 3;
		}
	}
	size_t portStartIndex(string &url) {
		return url.find(':', strlen("https://") + 1);
	}

	size_t pathStartIndex(string &url, size_t hostStartIndex) {
		return url.find('/', hostStartIndex);
	}

	int getPortByProtocol(string proto) {
		if (proto.compare("https://") == 0) {
			return 443;
		}

		return 80;
	}
};

void test(const char *url) {
	cout << "--------------------------------------" << endl;
	cout << "url: " << url << endl;
	UrlParser parser = UrlParser(url);
	cout << "proto: " << parser.getProto() << endl;
	cout << "host: " << parser.getHost() << endl;
	cout << "port: " << parser.getPort() << endl;
	cout << "path: " << parser.getPath() << endl;
}

int main() {
	test("HTTPS://www.myhost.net/path/test-1234");
	test("https://www.myhost.net:8443/path/test-1234");
	test("https://www.myhost.net:8443/");
	test("https://www.myhost.net/");
	test("https://www.myhost.net");
	test("http://www.myhost.net");
}