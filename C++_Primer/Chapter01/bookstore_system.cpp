/*************************************************************************
    > File Name: bookstore_system.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: Tue 03 Oct 2023 04:20:51 PM CST
 ************************************************************************/

#include<iostream>
#include"Sales_item.h"
using namespace std;

int main () {
	Sales_item total; //保存和的变量
	
	if (cin >> total) { //读入第一条交易记录，并确保有数据可以处理
		Sales_item trans; //保存下一条交易记录的变量
		
		while (cin >> trans) { //读入并处理剩余交易记录
			
			if (total.isbn() == trans.isbn()) { //如果我们仍在处理相同的书
				total += trans; //更新总销售额
			} else {
				cout << total << endl; //打印前一本书的结果
				total += trans; //total现在表示下一本书的销售额
			}
		}
		cout << total << endl; //打印最后一本书的结果
	} else {
		cerr << "No data!" << endl; //没有输入！警告读者
		return -1; //表示失败
	}

	return 0;
}
