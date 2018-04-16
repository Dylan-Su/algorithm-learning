//#include <iostream>
//#include <time.h>
//
//using namespace std;
//
//
//int main()
//{
//	int i, j;
//	srand((int)time(0));//srand（）产生一个随机种子，这里用time()函数是为了使每次产生的随机数不相等，
//	                    //如果不加入该条语句，则每次运行产生的随机数都相等，这种情况为伪随机数
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			cout <<rand()<< " ";//当需要输入0~100之间的随机数是，要用rand()*100/32767;
//			                      //当需要输出一整个内循环再换行时，内循环的输出后面不能加endl;
//			                    //当要输出m到n之间的整数时，用语句m+(int)((n-m)*rand()/32767);
//		}
//		cout << "\n" << endl;
//	}
//	system("pause");
//	return 0;
//}