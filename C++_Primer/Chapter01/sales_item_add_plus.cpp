/*************************************************************************
    > File Name: sales_item_add_plus.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Tue 03 Oct 2023 03:48:35 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main () {
	Sales_item item1, item2;
	cin >> item1 >> item2;

	if (item1.isbn() == item2.isbn()) { // 首先检查item1和item2是否表示相同的书
		cout << item1 + item2 << endl;
		return 0; //表示成功
	} else {
		cerr << "Data must refer to same ISBN" << endl;
		return -1; //表示失败
	}
}
