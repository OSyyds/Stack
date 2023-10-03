/*************************************************************************
    > File Name: rw_sales_item.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Tue 03 Oct 2023 03:19:27 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main () {
	Sales_item book;
	cin >> book; //读入ISBN号、售出的册数以及销售价格
	cout << book << endl; //写入ISBN、售出的册数、总销售额和平均价格
	return 0;
}
