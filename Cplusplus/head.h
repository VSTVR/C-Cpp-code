#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

//iostream,cstdlib,string

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>//c-style string operation
#include <cctype>//isanum,isalpha
#include <vector>//container
#include <stdexcept> //runtime_error 等错误提示
#include <fstream> //文件读入
#include <sstream> //
#include <math.h>

using namespace std;

class obj
{
protected:
    string name;
    char*chenhao;
    float attack;
    float defence;
public:
    static int number;
    obj(string,char*,float ,float);
    ~obj();
    obj operator+(obj b);
    void print();
    //get
    //char* getmessage(string *nam,char*chen,float *att,float *def);
};


class objplus:public obj
{
private:
    string beifen;
public:
    objplus(string nam,char*chen,float att,float def,string bei):obj(nam,chen,att,def),beifen(bei){number++;}
    ~objplus(){number--;};
    void printall();
    objplus operator+(objplus b);
};



/*
using namespace std;

class CJournal
{
    string name;
    string publisher;
    double price;
public:
    CJournal(string nam,string pub,double pri);
    void setname(string a);
    string getname();
    string getpublisher();
    double getprice();
};


class CSciJournal:public CJournal
{
    float factor;
public:
    static int number;
    CSciJournal(string nam,string pub,double pri,float fact):CJournal(nam,pub,pri),factor(fact){number++;}
    ~CSciJournal();
    void print();
    void setfactor(float a);
};


*/
#endif // HEAD_H_INCLUDED
