#include "stdafx.h"
#include "phone_number.h"
#include<string>

using namespace std;
phone_number::phone_number()
{
}


phone_number::~phone_number()
{
}

vector<string> phone_number::letterCombinations(string digits) {
	vector<string> result;
	vector<int> nums;
	for (size_t i = 0; i < digits.size(); i++)
	{
		char oneChar = digits[i];
		int number = (int)(oneChar - '0');
		nums.push_back(number);

	}
	if (nums.size() > 0)
	{
		this->doNext(nums, 0, "", result);
	}
	
	return result;
}

void phone_number::doNext(vector<int> &nums, int index, string str, vector<string> &result) {
	if (index == nums.size()) {
		result.push_back(str);
		//cout<< str << endl;
		return;
	}
	int number = nums[index];
	char* letters = map[number - 2];
	for (size_t j = 0; j < 4; j++)
	{
		char* letter = letters + j;
		if (*letter == '0') {
			continue;
		}
		
		string newStr = str + *letter;

		doNext(nums, index + 1, newStr, result);
	}

}
