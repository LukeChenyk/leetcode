#include "stdafx.h"
#include "btree.h"
#include "string_util.h"
#include "print_util.h"

int add() {
	return 0;
}

Btree::Btree()
{
}


Btree::~Btree()
{
}

string Btree::serialize(TreeNode* root) 
{
	return "";
}

// Decodes your encoded data to tree.
TreeNode* Btree::deserialize(string data) 
{
	data = data.substr(1, data.size() - 1);
	vector<string> datastrs;
	StringUtil::split(data, datastrs, ",");
	//PrintUtil::printVector(datastrs);
	return NULL;
}
