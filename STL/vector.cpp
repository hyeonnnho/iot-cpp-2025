///*
//	vector
//*/
//#include <iostream>
//#include <vector>		// vector ������� ����
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	vector<int> v1{ 10 };
//	vector<int> v2(5);		// �迭 5�� {0,0,0,0,0}
//	vector<int> v3 = { 1, 2, 3, 4, 5, 6 };
//
//	cout << "v size: " << v.size() << endl;
//	cout << "v1 size: " << v1.size() << endl;
//	cout << "v2 size: " << v2.size() << endl;
//	cout << "v3 size: " << v3.size() << endl;
//
//	for (int i = 0; i < 5; i++) {
//		printf("v3[%d]: %d ", i, v2[i]);
//	}
//
//	cout << endl;
//	for (auto i : v3) {			// ������� for��	i�� �ε����� �ƴϰ� v3�� �� ��Ұ����� i�� ����
//		//cout << v3[i] << endl;	// ���� - �ε��� ��� �Ұ�
//		cout << i << endl;
//	}
//
//	// begin()�� end()�� iterator(�ݺ���) Ÿ���� ��ȯ�Ѵ�. (������)
//	cout << "v3�� ù��° ��Ұ�: " << *v3.begin() << endl;
//	cout << "v3�� ������ ��Ұ�: " << *(v3.end()-1) << endl;	// end�� ������ ��� +1�� ��ȯ��
//
//	return 0;
//}
//
////vector.size(): ���� ũ��(����)�� ��ȯ
////vector.begin(): ù��° �ּҸ� ��ȯ
////vector.end(): �������� ���� �ּҸ� ��ȯ