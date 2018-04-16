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
//	cout << "蒙特卡罗概率算法计算π:\n";
//	cout << "输入点的数量：";
//	cin >> n;
//	PI = MontePI(n);
//	cout << "π的值近似接近于：\n" << PI<<"\n";
//	system("pause");
//}