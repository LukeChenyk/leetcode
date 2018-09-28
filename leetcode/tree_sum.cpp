#include "stdafx.h"
#include "tree_sum.h"
#include "Sort.h"

int indexOf(vector<int>& input, int target, int start, int end)
{
	if (end >= input.size()) {
		end = input.size() - 1;
	}

	//从后面开始查询，因为数组已经从小到大排序
	for (int i = end - 1; i >= start; i--)
	{
		if (input[i] == target)
		{
			return i;
		}

		if (input[i] < target)
		{
			return -1;
		}
	}
	return -1;
}

TreeSum::TreeSum()
{
}


TreeSum::~TreeSum()
{
}

vector<vector<int>> TreeSum::exc(vector<int>& nums)
{
	vector<vector<int>> result;
	vector<int> nullVec;
	vector<int> checkFir;
	vector<int> checkSec;

	Sort sort;
	sort.bubble(nums);//先排序
			   //printVec(nums);

	int len = nums.size();

	if (len < 3)
	{
		return result;
	}

	int firstMax = nums[len - 1];
	int secMax = nums[len - 2];

	//第一
	for (size_t i = 0; i < len; i++)
	{
		int first = nums[i];
		if (first > 0)
		{
			return result;
		}

		if (first < 0 - firstMax - secMax)
		{
			continue;
		}

		if (indexOf(nums, first, 0, i) > -1) {
			continue;
		}

		int thirdIndex = 0;
		//第二
		for (size_t j = i + 1; j < len; j++)
		{
			int sec = nums[j];

			if (sec > 0 && sec > -first)
			{
				//第二个数的绝对值大于第一个数
				continue;
			}

			if (0 - first - sec > firstMax)
			{
				continue;
			}

			if (indexOf(nums, sec, i + 1, j) > -1)
			{
				continue;
			}

			int rest = 0 - first - sec;
			int thirdEnd = len;
			if (thirdIndex > 0)
			{
				thirdEnd = thirdIndex;
			}

			//第三
			for (int n = thirdEnd - 1; n > j; n--)
			{
				int third = nums[n];
				if (third < rest)
				{
					//达到了第三个数的最小值了
					thirdIndex = n + 1;
					if (thirdIndex == len)
					{
						thirdIndex = len - 1;
					}
					break;
				}
				if (third != rest)
				{
					continue;
				}

				/*if (indexOf(nums, third, j + 1, n) > -1)
				{
				continue;
				}*/

				thirdIndex = n + 1;
				cout << "first=" << first << "sec=" << sec << "third=" << third << endl;
				vector<int> arr = { first,sec,third };
				result.push_back(arr);
				cout << i << "," << j << "," << n << endl;
				break;
			}
		}
	}
	return result;
}
