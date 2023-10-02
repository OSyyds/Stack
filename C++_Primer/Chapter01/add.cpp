/*************************************************************************
    > File Name: add.cpp
    > Author: 王小禹
    > Mail: 3062927325@qq.com 
    > Created Time: 2023年09月22日 星期五 16时52分09秒
 ************************************************************************/

#include<iostream>
using namespace std;

/*
 * 简单主函数:
 * 读取两个数，求它们的和
 */

int main () {
	
	//提示用户输入两个数
	cout << "Enter two numbers:" << endl;
	int v1 = 0, v2 = 0; //保存我们读入的输入数据的变量
	cin >> v1 >> v2; //读取输入数据
	cout << "The sum of " << v1 << " and " << v2 << " is " << v1+v2 << endl;
	
	return 0;
}
