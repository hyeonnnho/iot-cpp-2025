#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 상품 클래스 (기본)
class Product {
protected:
    string id;
    int price;
    string producer;
public:
    Product(string id, int price, string producer)
        : id(id), price(price), producer(producer) {
    }

    virtual void showInfo() const {
        cout << "[상품 ID] " << id << " | [가격] " << price << " | [제조사] " << producer << endl;
    }

    virtual string getType() const = 0;  // 순수 가상 함수
    virtual ~Product() {}
};

// 책 클래스
class Book : public Product {
public:
    Book(string id, int price, string producer) : Product(id, price, producer) {}

    void showInfo() const override {
        cout << "[책] ";
        Product::showInfo();
    }

    string getType() const override {
        return "Book";
    }
};

// 핸드폰 클래스
class HandPhone : public Product {
public:
    HandPhone(string id, int price, string producer) : Product(id, price, producer) {}

    void showInfo() const override {
        cout << "[핸드폰] ";
        Product::showInfo();
    }

    string getType() const override {
        return "HandPhone";
    }
};

// 컴퓨터 클래스
class Computer : public Product {
public:
    Computer(string id, int price, string producer) : Product(id, price, producer) {}

    void showInfo() const override {
        cout << "[컴퓨터] ";
        Product::showInfo();
    }

    string getType() const override {
        return "Computer";
    }
};

int main() {
    vector<Product*> productList;
    int choice;

    while (true) {
        cout << "\n===== 상품 관리 시스템 =====\n";
        cout << "1. 상품 등록\n";
        cout << "2. 상품 목록 출력\n";
        cout << "3. 종료\n";
        cout << "선택: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n[상품 종류 선택]\n1. 책\n2. 핸드폰\n3. 컴퓨터\n선택: ";
            int type;
            cin >> type;

            string id, producer;
            int price;

            cout << "상품 ID: ";
            cin >> id;
            cout << "가격: ";
            cin >> price;
            cout << "제조사: ";
            cin >> producer;

            if (type == 1) {
                productList.push_back(new Book(id, price, producer));
            }
            else if (type == 2) {
                productList.push_back(new HandPhone(id, price, producer));
            }
            else if (type == 3) {
                productList.push_back(new Computer(id, price, producer));
            }
            else {
                cout << "잘못된 상품 종류입니다.\n";
            }

        }
        else if (choice == 2) {
            cout << "\n[등록된 상품 목록]\n";
            for (const auto& product : productList) {
                product->showInfo();
            }

        }
        else if (choice == 3) {
            cout << "프로그램을 종료합니다.\n";
            break;

        }
        else {
            cout << "잘못된 선택입니다.\n";
        }
    }

    for (auto& product : productList) {
        delete product;
    }

    return 0;
}
