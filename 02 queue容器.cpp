#include<queue>
#include<iostream>
using namespace std;
//����queue
class person
{
public:
	string m_name;
	int m_age;
	person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}

};
void test01()
{
	queue<person>q;
	person p1("����", 18);
	person p2("����", 19);
	person p3("����", 28);
	person p4("����", 48);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�СΪ:" << q.size() << endl;
	while (!q.empty())
	{
		//�鿴��ͷ
		cout <<"������" << q.front().m_name << " ���䣺" << q.front().m_age << endl;
		//�鿴��β
		cout << "������" << q.back().m_name << " ���䣺" << q.back().m_age << endl;
		//����
		q.pop();

	}
	cout << "���д�СΪ:" << q.size() << endl;
}



int main()
{

	test01();

	system("Pause");
	return 0;
}