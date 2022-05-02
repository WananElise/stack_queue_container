#include<queue>
#include<iostream>
using namespace std;
//队列queue
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
	person p1("张三", 18);
	person p2("李四", 19);
	person p3("王五", 28);
	person p4("赵六", 48);
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小为:" << q.size() << endl;
	while (!q.empty())
	{
		//查看队头
		cout <<"姓名：" << q.front().m_name << " 年龄：" << q.front().m_age << endl;
		//查看队尾
		cout << "姓名：" << q.back().m_name << " 年龄：" << q.back().m_age << endl;
		//出队
		q.pop();

	}
	cout << "队列大小为:" << q.size() << endl;
}



int main()
{

	test01();

	system("Pause");
	return 0;
}