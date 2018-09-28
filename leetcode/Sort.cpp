#include "stdafx.h"
#include "Sort.h"


Sort::Sort()
{
}


Sort::~Sort()
{
}

//template<typename T>
void Sort::bubble(vector<int> &input)
{
	for (size_t i = 0; i < input.size(); i++)
	{
		for (size_t j = i + 1; j < input.size(); j++)
		{
			if (input[i] > input[j])
			{
				int temp = input[i];
				input[i] = input[j];
				input[j] = temp;
			}
		}
	}
}
