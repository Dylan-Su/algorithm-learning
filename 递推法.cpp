/*
#include <iostream>
using namespace std;
int calReBornNum(int month) {
	int t1, t2;
	if (month == 1|| month == 2) {
		return 1;
	}
	else {
		t1 = calReBornNum(month - 1);
		t2 = calReBornNum(month - 2);
		return t1 + t2;
	}
}

void main() {
	int month;
	cout << "请输入要查询兔子数量的月份：";
	cin >> month;
	int number = calReBornNum(month);
	cout << month << "月份时兔子的数量为：" << number << endl;
	system("pause");
}
*/