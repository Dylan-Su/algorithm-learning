//#include<iostream>
//#include<stdlib.h>
//#include<time.h>
//
//
//using namespace std;
//
//double MontePI(int n) {
//	double PI;
//	double x, y;
//	int i;
//	int sum = 0;
//	srand(time(NULL));
//	for (i = 1; i < n; i++) {
//		x = (double)rand()/RAND_MAX;
//		y = (double)rand()/RAND_MAX;
//		if ((x*x+y*y)<=1) {
//			sum++;
//		}
//	}
//	PI = 4.0 * sum / n;
//	return PI;
//}
//
//int main() {
//	int n;
//	double PI;
//	cout << "���ؿ��޸����㷨�����:\n";
//	cout << "������������";
//	cin >> n;
//	PI = MontePI(n);
//	cout << "�е�ֵ���ƽӽ��ڣ�\n" << PI<<"\n";
//	system("pause");
//}