/*************************************************************************
    > File Name: sales_item_add.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Tue 03 Oct 2023 03:31:43 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main () {
	Sales_item item1, item2;
	cin >> item1 >> item2; //读取一对交易记录
	cout << item1 + item2 << endl; //打印他们的和
	return 0;
}
