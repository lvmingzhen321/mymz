#include<iostream>
using namespace std;
class point{
    public:
    void setx(int x){
        m_x=x;
    }
    int getx(){
        return m_x;
    }
    void sety(int y){
        m_y=y;
    }
    int gety(){
        return m_y;

    }
    private:
    int m_x;
    int m_y;
};
class circle{
public:
    void setr(int r){
        m_r=r;
    }
    int getr(){
        return m_r;
    }
    void setcenter(point center){
        m_center=center;
    }
    point getcenter(){
        return m_center;
    }
private:
    int m_r;
    point m_center;
};
void isincircle(circle &c,point &p){
    int rdistance=(c.getr())^2;
   
    int distance=(c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())+(c.getcenter().gety())*(c.getcenter().gety());
    if(rdistance>distance){
        cout<<"点在圆外"<<endl;
    }
    else{
        cout<<"点在圆内"<<endl;
    }
} 
int main(){
    //创建圆
    circle c;
    c.setr(10);
    point center;
    center.setx(10);
    center.sety(10);
    c.setcenter(center);
    //创建点
    point p;
    p.setx(10);
    p.sety(10);

    //判断关系
    isincircle(c,p);
    system("pause");
    return 0;
}