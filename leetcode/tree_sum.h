#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

/*
* 给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。
*/
class TreeSum
{
public:
	TreeSum();
	~TreeSum();

	vector<vector<int>> exc(vector<int>& nums);
};

