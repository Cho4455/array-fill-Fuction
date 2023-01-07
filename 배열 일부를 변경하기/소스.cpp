#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data1[10]{ 0, }; // 모두 0으로 초기화 한거다.

	fill(data1, data1 + 3, 10); // 배열 0번째부터 0, 1, 2 인덱스에 10을 대입

	vector<int> data2({ 0,1,2,3,4,5,6,7 });

	fill(data2.begin(), data2.begin() + 3, 30);

	return 0;
}