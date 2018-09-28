#pragma once
#include <iostream>

using namespace std;


//�����������յ����ݽṹ����ƺ�ʵ��һ��  LRU(�������ʹ��) ������ơ���Ӧ��֧�����²����� ��ȡ���� get �� д������ put ��
//
//��ȡ���� get(key) - �����Կ(key) �����ڻ����У����ȡ��Կ��ֵ�����������������򷵻� - 1��
//д������ put(key, value) - �����Կ�����ڣ���д��������ֵ�������������ﵽ����ʱ����Ӧ����д��������֮ǰɾ���������ʹ�õ�����ֵ���Ӷ�Ϊ�µ�����ֵ�����ռ䡣
//���Ƿ������ O(1) ʱ�临�Ӷ�����������ֲ�����



class LRUCache
{

private:
	int capacity;
	/*hash_map<int, int> intHashMap;
	hash_map<int, int> useCountHashMap;*/
public:
	LRUCache(int capacity);


	int get(int key);

	void put(int key, int value);

	~LRUCache();
};

