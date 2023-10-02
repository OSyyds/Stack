/*************************************************************************
    > File Name: while_state.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Mon 02 Oct 2023 06:10:54 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main () {
	int sum = 0, va1 = 1;
	//只要va1的值小于等于10, while循环就会持续执行
	
	while (va1 <= 10) {
		sum += va1; //将sum + va1赋予sum
		++va1; //将va1加1
	}

	cout << "Sum  of 1 to 10 inclusive is " << sum << endl;
	return 0;
}
