//#include <iostream>
//
//using namespace std;
//
//double rand01(double *num)
//{
//	double u, v, p, base, temp1, temp2, temp3;
//	base = 256;//基数应为2的整数倍
//	u = 17.0;
//	v = 139.0;
//	//对temp1取余数，即MOD(u*r+v)；
//	temp1 = u * (*num) + v;
//	temp2 = (int)(temp1 / base);//
//	temp3 = temp1 - temp2 * base;
//
//	*num = temp3;
//	p = *num / base;
//
//	return p;
//
//}
//
//int main()
//{
//	int i;
//	double r = 5.0;
//	int m = 5.0;
//	int n = 6.0;
//	cout << "产生0到1之间的随机数" << endl;
//	for (i = 0; i < 10; i++)
//	{
//		cout <<m + (n-m)* rand01(&r) << " ";//当需要产生m到n之间的随机数时，：m+(n-m)*rand01(*r)
//	}
//	cout << endl;
//	system("pause");
//
//	return 0;
//}