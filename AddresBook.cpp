#include <iostream>

using namespace std;

#define PERSON_MAX 1000

void MenuShow()
{
    cout << "----------------------------" << endl;
    cout << "-----   1.添加联系人   -----" << endl;
    cout << "-----   2.显示联系人   -----" << endl;
    cout << "-----   3.删除联系人   -----" << endl;
    cout << "-----   4.更改联系人   -----" << endl;
    cout << "-----   5.清空联系人   -----" << endl;
    cout << "-----   6.查找联系人   -----" << endl;
    cout << "-----   0.退出通讯录   -----" << endl;
    cout << "----------------------------" << endl;
}

struct Person
{
    string P_name;
    int P_age;
    string P_gender;
    string P_phonenumber;
    string P_address;
};

struct AddressBook
{
    struct Person PersonAccount[PERSON_MAX];
    int person_number = 0;
};

void AddPerson(AddressBook *abs)
{

    if (abs->person_number == PERSON_MAX)
    {
        cout << "通讯录已满." << endl;
        return;
    }
    else
    {
        string name, gender, add, phonenumber;
        int age = 0;
        cout << "请输入联系人姓名:" << endl;
        cin >> name;
        abs->PersonAccount[abs->person_number].P_name = name;

        cout << "请输入联系人性别:" << endl;
        cin >> gender;
        abs->PersonAccount[abs->person_number].P_gender = gender;

        cout << "请输入联系人年龄:" << endl;
        cin >> age;
        abs->PersonAccount[abs->person_number].P_age = age;

        cout << "请输入联系人号码:" << endl;
        cin >> phonenumber;
        abs->PersonAccount[abs->person_number].P_phonenumber = phonenumber;

        cout << "请输入联系人地址:" << endl;
        cin >> add;
        abs->PersonAccount[abs->person_number].P_address = add;

        abs->person_number++;

        cout << "联系人添加成功!" << endl;

        system("pause");

        system("cls");
    }
}

void ShowAddressBook(AddressBook *abs)
{
    
}

int main()
{
    AddressBook abs;

    int select = 0;

    while (true)
    {
        MenuShow();

        cout << "请输入功能号:" << endl;
        cin >> select;

        switch (select)
        {
        case 1:
            AddPerson(&abs);
            break;

        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 0:
            cout << "按任意键退出通讯录系统,欢迎下次使用!" << endl;
            system("pause");
            return 0;

        default:
            break;
        }
    }

    return 0;
}