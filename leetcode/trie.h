#pragma once
#include <string>
#include <vector>
using namespace std;
class Trie
{
private:
	vector<string> strVec;
	vector<int> strValueVec;

public:
	Trie() {};
	~Trie() {};

	/** Inserts a word into the trie. */
	void insert(string word);

	/** Returns if the word is in the trie. */
	bool search(string word);

	/** Returns if there is any word in the trie that starts with the given prefix. */
	bool startsWith(string prefix);

	int transStrToValue(string word, int len);
};

void Trie::insert(string word) {
	if (word == "") {
		return;
	}
	bool isIn = search(word);
	if (isIn) {
		return;
	}

	strVec.push_back(word);
	strValueVec.push_back(transStrToValue(word, 9));
}

bool Trie::search(string word) {
	for (int i = 0; i < strVec.size(); i++)
	{
		if (strVec[i] == word)
		{
			cout << "找到一样的字符串:" + word << endl;
			return true;
		}
	}
	return false;
}

bool Trie::startsWith(string prefix) {
	int prefixLen = prefix.length();
	if (prefixLen == 0) {
		return;
	}
	int prefixStrValue = transStrToValue(prefix, 9);
	int posV = 1;
	int len = prefixLen > 9 ? 9 : prefixLen;
	for (int i = 0; i < len; i++)
	{
		posV = posV * 10;
	}

	for (int i = 0; i < strVec.size(); i++)
	{
		string word = strVec[i];
		if (word.length() < prefixLen) {
			continue;
		}

		int strValue = strValueVec[i];
		if (strValue < prefixStrValue) {
			continue;
		}

		if ((strValue % posV) == prefixStrValue) {
			bool isSame = true;
			for (int j = 0; j < prefixLen; j++) {
				if (word[j] != prefix[j]) {
					isSame = false;
					break;
				}
			}

			if (isSame) {
				return true;
			}
		}
	}

	return false;
}

int Trie::transStrToValue(string word, int len) {
	int value = 0;
	for (int i = 0; i < len; i++) {
		if (i >= word.length()) {
			break;
		}
		int charValue = (int(word[i]) - 97) % 10;//a
		int posValue = 1;
		for (int j = 0; j < i; j++) {
			posValue = posValue * 10;
		}
		value += posValue * charValue;
	}
	return value;
}

