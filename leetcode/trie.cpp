#include "stdafx.h"
#include "trie.h"


Trie::Trie()
{ 
}


Trie::~Trie()
{
}

/** Inserts a word into the trie. */
void Trie::insert(string word) {
	if (word == "") {
		return;
	}
	bool isIn = search(word);
	if (isIn) {
		return;
	}

	strVec.push_back(word);
}

/** Returns if the word is in the trie. */
bool Trie::search(string word) {
	for (int i = 0; i < strVec.size(); i++)
	{
		if (strVec[i] == word)
		{
			return true;
		}
	}
	return false;
}

/** Returns if there is any word in the trie that starts with the given prefix. */
bool Trie::startsWith(string prefix) {
	return true;
}
