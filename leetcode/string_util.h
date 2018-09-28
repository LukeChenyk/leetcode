#pragma once

#include <string>
#include <vector>

using namespace std;
class StringUtil
{
public:
	StringUtil();
	~StringUtil();
	static void split(const string& s, vector<string>& v, const string& c);
};

