//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
//#define SIZE 10
//
//void bubbleSort(int *a,int len) 
//{
//	int i, j, k, temp;
//	for (i = 0; i < len - 1; i++) 
//	{
//		for (j = len - 1; j > i; j--) 
//		{
//			if(a[j]<a[j-1])
//			{
//				temp = a[j];
//				a[j] = a[j-1];
//				a[j-1] = temp;
//			}
//			
//			
//		}
//		cout << "��" << i + 1 << "��������";
//		for (k = 0; k< len ; k++) 
//		{
//			cout << a[k] << endl;
//		}
//	}
//}
//
//int main()
//{
//	int array[SIZE];
//	int i;
//	for (i = 0; i<SIZE; i++)
//	{
//		array[i] = rand() / 1000 + 100;
//	}
//	cout << "����ǰ�����˳��Ϊ��\n" << endl;
//	for (i = 0; i < SIZE; i++)
//	{
//		cout << array[i] << endl;
//	}
//
//	bubbleSort(array,SIZE);
//	cout << "����������˳��Ϊ��\n" << endl;
//	for (i = 0; i < SIZE; i++)
//	{
//		cout << array[i] << endl;
//	}
//	system("pause");
//}
