#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

/*
* ����һ������ n ������������ nums���ж� nums ���Ƿ��������Ԫ�� a��b��c ��ʹ�� a + b + c = 0 ���ҳ��������������Ҳ��ظ�����Ԫ�顣
*/
class TreeSum
{
public:
	TreeSum();
	~TreeSum();

	vector<vector<int>> exc(vector<int>& nums);
};

