//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"          //��Ҫ©д���У��������ͨ����
using namespace std;
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::stud1(int a,const char b[20], char c)
{
    num = a;
    for (int i = 0; i <= 20; i++)
        name[i] = b[i];
    sex = c;





}