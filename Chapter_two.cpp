#include <iostream>
#include <string>
#include "leeselection.h"

using namespace std;

const double PI = 3.14;

class cube
{

public:
    int l;
    int w;
    int h;
    int getarea()
    {
        return 2 * (l * w + w * h + l * h);
    }
    int getvolume()
    {
        return l * w * h;
    }
    void setl(int myl)
    {
        l = myl;
    }
    void setw(int myw)
    {
        w = myw;
    }

    void seth(int myh)
    {
        h = myh;
    }
};

class student
{
public:
    string name;
    int studentnum;

    void setname(string myname)
    {
        name = myname;
    }

    void setnum(int mynum)
    {
        studentnum = mynum;
    }

    void showstduent()
    {
        printl(name);
        printl(studentnum);
    }
};

class circle
{

public:
    int m_r;
    double calculatezc()
    {
        return 2 * PI * m_r;
    }
};

int *func()
{
    int *p = new int(10);
    return p;
}

void test2()
{
    int *arr = new int[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++)
    {
        printl(arr[i]);
    }

    delete[] arr;
}

void test()
{

    int *p = func();
    print(*p);
    delete p;
    print(*p);
    print(*p);
    print(*p);
    //堆区的内存由程序员管理
}

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}
//引用swap
void swap2(int &a, int &b)
{

    int temp = a;
    a = b;
    b = temp;
}

int &getquote()
{
    int a = 10;
    return a;
}

bool comcube(cube a, cube b){
    return (a.getvolume()==b.getvolume())&&(a.getarea()==a.getarea());
}

int main()
{

    // test2();

    //饮用必须初始化
    //引用初始化之后不可以改变

    // int a = 10;
    // int b = 20;
    // // int &b; 这个不对，必须要初始化

    // // int &b =a;

    // swap2(a, b);
    // print(a);
    // print(b);

    // int &ref = getquote();
    // print(ref);

    // circle c1;
    // c1.m_r=10;
    // print(int(c1.calculatezc()));

    // student ariel;
    // ariel.setname("sdas");
    // ariel.setnum(231);
    // ariel.showstduent();

    system("Pause");
    return 0;
}
