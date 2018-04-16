/*
#include <iostream>
using namespace std;

int qiongju(int head, int foot, int *chicken, int *robbeit) {
	int re = 0;
	int i, j;
	for (i = 1; i <= head; i++) {
		j = head - i;
		if (i * 2 + j * 4 == 94) {
			re = 1;
			*chicken = i;
			*robbeit = j;
			}
		}
	return re;
}

int main() {
	int head, root,re;
	int chicken, robbeit;
	cout<<"穷举法计算鸡和兔子的数量\n"<<endl;
	cout<<"请输入有多少只动物的头\n"<<endl;
	cin>>head;
	cout<<"请输入有多少只动物的脚\n"<<endl;
	cin>>root;


	re = qiongju(head, root,&chicken,&robbeit);
	if (re == 1) {
		cout<<"有"<<chicken<<"只鸡和"<<robbeit<<"只兔子\n"<<endl;
			}
	else {
		cout<<"无法求解\n"<<endl;
	}
	system("pause");
	return 0;
}
*/