//#include<iostream>
//using namespace std;
//
//
//#define MAXNUM 100
//int falseCoin(int coin[], int low, int high) {
//	int i, sum1, sum2, sum3;
//	int re;
//	sum1 = sum2 = sum3 = 0;
//	//�ж����ֻ����öӲ��ʱ�ļٱ�
//	if (low + 1 == high) {
//		if (coin[low] > coin[high]) {
//			re = high + 1;
//			
//		}
//		else {
//			re = low + 1;
//			
//		}
//	}
//	if ((high - low + 1) % 2 == 0) {           //��ż��ö����
//		for (i = low; i < (high - low + 1) / 2; i++) {
//			sum1 = sum1 + coin[i];
//		}
//		for (i = high; i >= (high - low + 1) / 2; i--) {
//			sum2 = sum2 + coin[i];
//		}
//		if (sum1 < sum2) {
//			re = falseCoin(coin, low, (high - low + 1) / 2 - 1);
//		}
//		else if (sum1 > sum2) {
//			re = falseCoin(coin, (high - low + 1) / 2, high);
//		}
//		else
//		{
//			re =  0;
//		}
//	}
//	else if ((high - low + 1) % 2 != 0) {       //������ö����
//		for (int i = low; i < (high - low) / 2; i++) {
//			sum1 = sum1 + coin[i];
//		}
//		for (int i = high; i > (high - low) / 2; i--) {
//			sum2 = sum2 + coin[i];
//		}
//		if (sum1 < sum2) {
//			re = falseCoin(coin, low, (high - low) / 2 - 1);
//		}
//		else if (sum1 > sum2) {
//			re = falseCoin(coin, (high - low) / 2 + 1, high);
//		}
//		else if((sum1 == sum2)&&(coin[low] == coin[(high - low) / 2])){
//			re = 0;
//		}
//		else {
//			re = (high - low) / 2 + 1;
//		}
//	}return re;
//}
//
//int main() {
//	int loc;
//	int i, num;
//	int coin[MAXNUM];
//	cout << "�����㷨�������������";
//	cout << "���������ҵ��ܸ�����";
//	cin >> num;
//	cout << "���������ҵ���٣������1��ʾ���ٵ���0 ��ʾ\n";
//	for (i = 0; i <= num - 1; i++) {
//		cin >> coin[i];
//	}
//	loc = falseCoin(coin, 0, num - 1);
//	if (loc > 0) {
//		cout << "�������ǵ�" << loc << "ö";
//	}
//	else {
//		cout << "���е����Ҷ�����ģ�\n";
//	}
//	system("pause");
//	return 0;
//}