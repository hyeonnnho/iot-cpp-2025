///*
//	동적 메모리 할당 받을 크기를 입력받고 원소를 저장하여 출력하시오.
//*/
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int size;
//	int* p;
//	printf("크기 >> ");
//	scanf_s("%d", &size);
//	p = (int*)malloc(size * sizeof(int));
//
//	printf("%d개의 원소 입력\n", size);
//	for (int i = 0; i < size; i++) {
//		cout << i << "번째 원소: ";
//		cin >> p[i];
//	}
//	printf("%d개의 원소 출력\n", size);
//	for (int i = 0; i < size; i++) {
//		cout << i << "번째 원소: " << p[i] << endl;
//	}
//
//	free(p);
//	return 0;
//}