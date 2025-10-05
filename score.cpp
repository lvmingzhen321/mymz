#include <iostream>
using namespace std;
//菜单界面
void showmenu(){
    cout<<"1.添加联系人"<<endl;
    cout<<"2.显示联系人"<<endl;
    cout<<"3.删除联系人"<<endl;
    cout<<"4.查找联系人"<<endl;
    cout<<"5.修改联系人"<<endl;
    cout<<"6.清空联系人"<<endl;
    cout<<"0.退出通讯录"<<endl;
}
#include <string>
struct person{
    string name;
    int sex;
    int age;
    string phone;
    string addr;
};
#define max 1000
struct addressbooks
{
    struct person personarry[max];
    int size;
};
//添加联系人
void addperson(addressbooks *abs){
    if(abs->size==max){
        cout<<"通讯录已满，无法添加"<<endl;
        return;
    }
    else{
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs->personarry[abs->size].name=name;
        //年龄
        cout<<"请输入年龄："<<endl;
        int age=0;
        cin>>age;
        abs->personarry[abs->size].age=age;
        //性别
        cout<<"请输入性别："<<endl;
        cout<<"1.男 2.女"<<endl;
        int sex=0;
        while(true)
        {
            cin>>sex;
            if(sex==1||sex==2)
            {
                abs->personarry[abs->size].sex;
                break;
            }
            cout<<"重新输入"<<endl;

        }
        //电话
        cout<<"请输入电话："<<endl;
        string phone;
        cin>>phone;
        abs->personarry[abs->size].phone=phone;
        abs->size++;
        cout<<"添加成功"<<endl;
        

        
    }
}
//显示联系人
void showperson(addressbooks *abs){
    if(abs->size==0){
        cout<<"当前记录为空"<<endl;
    }
    else{
        for(int i=0;i<abs->size;i++){
            cout<<"姓名："<<abs->personarry[i].name<<"\t";
            cout<<"性别："<<abs->personarry[i].sex<<"\t";
            cout<<"年龄："<<abs->personarry[i].age<<"\t";
            cout<<"电话："<<abs->personarry[i].phone<<"\t";
            cout<<"地址："<<abs->personarry[i].addr<<endl;
            
        }
    }
    system("pause");
    system("cls");
}
//删除联系人
int isexist(addressbooks*abs,string name)
{
    for(int i=0;i<abs->size;i++)
    {
        if (abs->personarry[i].name==name)
        {
            return i;
        }
    }
    return -1;
}
void deleteperson(addressbooks*abs)
{
    cout<<"输入要删除的联系人"<<endl;
    string name;
    cin>>name;
    int ret=isexist(abs,name);
    if(ret!=-1)
    {
        for(int i=ret;i<abs->size;i++)
        {
            abs->personarry[i]=abs->personarry[i+1];

        }
        abs->size--;
        cout<<"删除成功"<<endl;
    }
    else
    {
        cout<<"查无此人"<<endl;
    }
    system("pause");
    system("cls");
}
//查找联系人
void findperson(addressbooks*abs)
{
    cout<<"请输入您要查找的联系人"<<endl;
    string name;
    cin>>name;
    int ret=isexist(abs,name);
    if(ret!=-1)
    {
        
        cout<<"姓名："<<abs->personarry[ret].name<<"\t";
        cout<<"年龄"<<abs->personarry[ret].age<<"\t";
    }
    else{
        cout<<"查无此人"<<endl;
    }
    system("pause");
    system("cls");
}
int main(){
    addressbooks abs;
    abs.size=0;

    int select=0;
    while(true){
        showmenu();
        cin>>select;
        switch(select)
        {
            case 1:
            addperson(&abs);
            break;
            case 2:
            showperson(&abs);
            break;
            case 3:
            deleteperson(&abs);
            break;
            case 4:
            findperson(&abs);
            break;
            case 5:
            break;
            case 6:
            break;
            case 0:
            cout<<"欢迎下次使用"<<endl;
            system ("pause");
            return 0;
            break;
            default:
            break;

        }
    }
    addperson(&abs);
    system("pause");
    return 0;
}