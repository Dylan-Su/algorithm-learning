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
	cout<<"��ٷ����㼦�����ӵ�����\n"<<endl;
	cout<<"�������ж���ֻ�����ͷ\n"<<endl;
	cin>>head;
	cout<<"�������ж���ֻ����Ľ�\n"<<endl;
	cin>>root;


	re = qiongju(head, root,&chicken,&robbeit);
	if (re == 1) {
		cout<<"��"<<chicken<<"ֻ����"<<robbeit<<"ֻ����\n"<<endl;
			}
	else {
		cout<<"�޷����\n"<<endl;
	}
	system("pause");
	return 0;
}
*/