﻿///*
//	vector container - 삽입, 삭제, 참조
//*/
//#include <iostream>
//#include <vector>
//#include <list>
//using namespace std;
//
//void main()
//{
//	vector<string> v;
//	list<int> li;
//
//	v.push_back("tiger");
//	v.push_back("lion");
//	v.push_back("zebra");
//	v.push_back("horse");
//
//	cout << "v.front(): " << v.front() << endl;
//	cout << "v.back(): " << v.back() << endl;
//	cout << "v.capacity(): " << v.capacity() << endl;
//	cout << endl;
//
//	vector<string>::iterator iter;
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";
//	}
//	cout << endl;
//
//	v.pop_back();
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";
//	}
//	cout << endl;
//
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		if (*iter == "zebra") {
//			v.erase(iter); break;
//		}
//	}
//	for (iter = v.begin(); iter != v.end(); iter++) {
//		cout << *iter << "/ ";
//	}
//	cout << endl;
//	
//}
//// iterator 타입 : iterator , begin(), end()