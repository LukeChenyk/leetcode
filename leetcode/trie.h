#pragma once
#include <string>
#include <vector>
using namespace std;
class Trie
{
private:
	vector<string> strVec;

public:
	Trie();
	~Trie();

	/** Inserts a word into the trie. */
	void insert(string word);

	/** Returns if the word is in the trie. */
	bool search(string word);

	/** Returns if there is any word in the trie that starts with the given prefix. */
	bool startsWith(string prefix);
};

