#include<iostream>
using namespace std;
//函数占位参数 ，占位参数也可以有默认参数
class student{
	public:
	string m_name;
	int m_id;
	public:
		void setname(string name){
			m_name=name;
		}
		void setid(int id){
			m_id=id;
		}
		void showstudent(){
			cout<<"姓名："<<m_name<<"  id:"<<m_id<<endl;
		}
	
};
int main(){
	student stu;
	stu.setname("lmz");
	stu.setid(22);
	stu.showstudent();
	system("pause");
	return 0;
}
