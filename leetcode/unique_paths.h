#pragma once
/*
һ��������λ��һ�� m x n ��������Ͻ� ����ʼ������ͼ�б��Ϊ��Start�� ����
������ÿ��ֻ�����»��������ƶ�һ������������ͼ�ﵽ��������½ǣ�����ͼ�б��Ϊ��Finish������
���ܹ��ж�������ͬ��·����
*/
class UniquePaths
{
public:
	UniquePaths();
	~UniquePaths();
	int goToStep(int m, int n);
	int calculate(int m, int n);

private:
	int** map;
};

