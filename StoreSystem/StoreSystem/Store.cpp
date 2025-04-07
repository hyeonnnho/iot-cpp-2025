#include <iostream>
#include <vector>
#include <string>
using namespace std;

// ��ǰ Ŭ���� (�⺻)
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
        cout << "[��ǰ ID] " << id << " | [����] " << price << " | [������] " << producer << endl;
    }

    virtual string getType() const = 0;  // ���� ���� �Լ�
    virtual ~Product() {}
};

// å Ŭ����
class Book : public Product {
public:
    Book(string id, int price, string producer) : Product(id, price, producer) {}

    void showInfo() const override {
        cout << "[å] ";
        Product::showInfo();
    }

    string getType() const override {
        return "Book";
    }
};

// �ڵ��� Ŭ����
class HandPhone : public Product {
public:
    HandPhone(string id, int price, string producer) : Product(id, price, producer) {}

    void showInfo() const override {
        cout << "[�ڵ���] ";
        Product::showInfo();
    }

    string getType() const override {
        return "HandPhone";
    }
};

// ��ǻ�� Ŭ����
class Computer : public Product {
public:
    Computer(string id, int price, string producer) : Product(id, price, producer) {}

    void showInfo() const override {
        cout << "[��ǻ��] ";
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
        cout << "\n===== ��ǰ ���� �ý��� =====\n";
        cout << "1. ��ǰ ���\n";
        cout << "2. ��ǰ ��� ���\n";
        cout << "3. ����\n";
        cout << "����: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n[��ǰ ���� ����]\n1. å\n2. �ڵ���\n3. ��ǻ��\n����: ";
            int type;
            cin >> type;

            string id, producer;
            int price;

            cout << "��ǰ ID: ";
            cin >> id;
            cout << "����: ";
            cin >> price;
            cout << "������: ";
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
                cout << "�߸��� ��ǰ �����Դϴ�.\n";
            }

        }
        else if (choice == 2) {
            cout << "\n[��ϵ� ��ǰ ���]\n";
            for (const auto& product : productList) {
                product->showInfo();
            }

        }
        else if (choice == 3) {
            cout << "���α׷��� �����մϴ�.\n";
            break;

        }
        else {
            cout << "�߸��� �����Դϴ�.\n";
        }
    }

    for (auto& product : productList) {
        delete product;
    }

    return 0;
}
