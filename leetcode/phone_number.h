#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
class phone_number
{

private:
	char map[8][4] = {
	{ 'a', 'b', 'c', '0' },
	{ 'd', 'e', 'f', '0' },
	{ 'g', 'h', 'i', '0' },
	{ 'j', 'k', 'l', '0' },
	{ 'm', 'n', 'o', '0' },
	{ 'p', 'q', 'r', 's' },
	{ 't', 'u', 'v', '0' },
	{ 'w', 'x', 'y', 'z' }};

public:
	phone_number();
	~phone_number();

	vector<string> letterCombinations(string digits);

	void doNext(vector<int> &nums, int index , string str, vector<string> &result);
};

