#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data1[10]{ 0, }; // ��� 0���� �ʱ�ȭ �ѰŴ�.

	fill(data1, data1 + 3, 10); // �迭 0��°���� 0, 1, 2 �ε����� 10�� ����

	vector<int> data2({ 0,1,2,3,4,5,6,7 });

	fill(data2.begin(), data2.begin() + 3, 30);

	return 0;
}