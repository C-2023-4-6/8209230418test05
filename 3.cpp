/*#include<iostream>//3
using namespace std;
class cft
{
public:
	void set_value();
	float js_value();
	void display();
private:
	float length;
	float weight;
	float high;
};
void cft::set_value()
{
	cout << "��ֱ����볤���εĳ�������:" << endl;
	cin >> length;
	cin >> weight;
	cin >> high;
}
float cft::js_value()
{
	float v;
	v = length * weight * high;
	return v;
}
void cft::display() { cout << "�����ε����Ϊ:" << js_value() << endl; }
int main()
{
	cft v1, v2, v3;
	v1.set_value();
	cout << "������1�����" << endl;
	v1.display();
	v2.set_value();
	cout << "������2�����" << endl;
	v2.display();
	v3.set_value();
	cout << "������3�����" << endl;
	v3.display();
}
*/
