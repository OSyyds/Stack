/*************************************************************************
    > File Name: unsigned_add_signed.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Thu 23 Nov 2023 10:06:16 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main () {
	unsigned int u = 10;
	int i = -42;

	cout << i + i << endl; //输出-84
	cout << u + i << endl; //如果int占32位，输出4294967264
	return 0;
}
