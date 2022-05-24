#include <iostream>
#include <string>
#include "print.h"

using namespace std;
#define day 7

struct Student
{
    string sName;
    int score;
};

struct Teacher
{
    string tName;
    struct Student sarr[5];
};

void allocateSpace(Teacher arr[], int len)
{
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        arr[i].tName = "Teacher_";
        arr[i].tName += nameSeed[i];
        for (int j = 0; j < 5; j++)
        {
            arr[i].sarr[j].sName = "Student";
            arr[i].sarr[j].sName += nameSeed[j];
            arr[i].sarr[j].score = random(40,100);
        }
    }
}

void printinfo(Teacher arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printl(arr[i].tName);
        for (int j = 0; j < 5; j++)
        {

            printt(arr[i].sarr[j].sName+"   ");
            printlt(arr[i].sarr[j].score);
        }
    }
}

int swap(int *p, int *q)
{
    return *p + *q;
}

void sort(int *arr, int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

string R (int a){
    if(a==10){
        return "X";
    }else{
        return "bushishi";
    }
}

struct racecar
{
    int speed;
    string name;
};

void printarr(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        print(arr[i]);
    }
}

int main()
{

    // int a =10;
    // cout<<"hello c++"<<endl;
    // cout<<"a = "<<a<<endl;
    // cout<<"a = "<<day<<endl;
    // char ch ='a';
    // cout<<sizeof(char)<<endl;
    // cout<<ch<<endl;
    // cout<<'\n'<<'\\'<<endl;
    // cout<<ch<<endl;
    // cout<<"aaa\vhelloworld"<<endl;
    // cout<<"aaaa\vhelloworld"<<endl;
    // cout<<"aaaaaaa\vhelloworld"<<endl;

    // vid13
    // char a[] = "helloworld";
    // string aa = "hello\tworld";
    // cout<<a<<endl;
    // cout<<aa<<endl;

    // vid14
    // //bool占用一个内存大小
    // bool flag = false;
    // if (flag){
    //     cout<<"helloworld"<<endl;
    // }
    // else{
    //     cout<<"false"<<endl;
    // }

    // vid15 cin

    // int a;
    // cout<<"please enter"<<endl;
    // cin >>a;
    // cout<<a<<endl;

    // string a;
    // cout<<"Please ente the string"<<endl;
    // cin >> a;
    // cout<<a<<endl;

    // bool a;
    // cout<<"please enter bool"<<endl;
    // cin >> a;
    // cout<<a<<endl;

    // int score =0;
    // cout<<"Please enter ur score"<<endl;
    // cin>>score;

    // if(score>600){
    //     cout<<"Niubi"<<endl;
    // }else if(score<600&&score >400){
    //     cout<<"not bvery niub"<<endl;
    // }
    // else{
    //     cout<<"garbadge"<<endl;
    // }

    // for loop
    //  for( int i =0; i< 100;i++){
    //      if(i/10==7||i%10==7||i==7){
    //          cout<<i<<endl;
    //      }
    //  }

    //九九乘法表
    // for( int i =1; i< 10;i++){
    //     for( int j =1; j<=i;j++){
    //         cout<<i<<" * "<<j<<" = "<<i*j;
    //         cout<<"     ";
    //     }
    //     cout<<endl;
    // }

    //     cout << "1xxxx" << endl;
    //     goto flag;
    //     cout << "2xxxx" << endl;
    //     cout << "3xxxx" << endl;
    // flag:
    //     cout << "4xxxx" << endl;

    //失败的冒泡排序
    // int arr[5] = {45, 63, 62, 123, 3};
    // int mmax = 0;
    // int index = 0;

    // for (int j = 0; j <5; j++)
    // {

    //     mmax = arr[0];

    //     for (int i = 0; i < 5; i++)
    //     {
    //         if (arr[i] > mmax)
    //         {
    //             mmax = arr[i];
    //             index = i;
    //         }
    //     }

    //     int temp = arr[index];
    //     arr[index] = arr[4 - j];
    //     arr[4 - j] = temp;
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr[i]<<"         ";
    // }

    // int arr[9] = {5, 6, 64, 2, 31, 3213, 321, 1, 12331};
    // for (int i = 0; i < 9 - 1; i++)
    // {
    //     for (int j = 0; j < 9 - i - 1; j++)
    //     {

    //         if(arr[j]>arr[j+1]){
    //             int temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }

    //     }
    // }

    // for (int i = 0; i < 9; i++)
    // {
    //     cout << arr[i] << "         ";
    // }

    // int score[3][3] = {
    //     {4, 35, 53},
    //     {45, 23, 34},
    //     {234, 234, 34}
    //                 };

    // int sum = 0;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum = sum + score[i][j];
    //     }
    // }
    // cout << sum << endl;

    // cout << add(57, 6) << endl;
    // print(322314);

    // int a = 10;
    // int * p = &a;
    // *p =1000;
    // print(a);
    // print(*p);

    // int arr[]={1,2,3,4,5,6,7};

    // int * index = arr;
    // print(*index);
    // index +=2;
    // print(*index);

    // int aa=10;
    // int bb=20;
    // int *p1=&aa;
    // int *p2=&bb;
    // print(swap(p1,p2));

    // print(1);
    // int arr[6] = {1,2,5,6,3,11};

    // sort(arr,4);
    // printarr(arr,6);

    // struct racecar cararr[3]={
    //     {25, "Merc"},
    //     {24, "RB"},
    //     {  27, "F"}
    // };
    // cararr[1].speed=90;
    // print(cararr[1].speed);

    // racecar hass = {60,"hass"};
    // racecar * p = &hass;
    // racecar ms = *p;
    // hass.speed=70;
    // print(ms.speed);
    // print(p->speed);
    // printl("sdasda");
    // printl(3123722);

    // Teacher tarr[3];
    // allocateSpace(tarr, 3);
    // printinfo(tarr, 3);
    

    system("Pause");
    return 0;
}
