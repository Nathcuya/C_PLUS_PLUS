#include<iostream>>

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
    int age;
    string P_gender;
    string P_phonenumber;
    string P_address;
};

struct AddresBook
{
    struct Person PersonAccount[PERSON_MAX];
    int person_number = 0;
};

void AddPerson(AddresBook *abs)
{

    if(abs->person_number==PERSON_MAX)
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

        
    }
}