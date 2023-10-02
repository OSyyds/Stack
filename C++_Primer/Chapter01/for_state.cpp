/*************************************************************************
    > File Name: for_state.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Mon 02 Oct 2023 06:45:26 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main () {
	int sum = 0;

	//从1 加到 10
	for (int val = 1; val <= 10; ++val) {
		sum += val; //等价于sum = sum + val
	}

	cout << "Sum of 1 to 10 inclusive is " << sum << endl;
	return 0;
}
