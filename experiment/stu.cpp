#include "stu.h"


void stu::print()
{
    cout<<"姓名: "<<name<<endl;
    cout<<"住址: "<<home<<endl;
    cout<<"电话: "<<tel<<endl;
    cout<<"邮箱: "<<email<<endl;
}

stu::stu(char*pname,char*phome="",char*ptel="",char*pemail="")
{
    number++;
    name=new char[strlen(pname)+1];strcpy(name,pname);
    home=new char[strlen(phome)+1];strcpy(home,phome);
    tel=new char[strlen(ptel)+1];strcpy(tel,ptel);
    email=new char[strlen(pemail)+1];strcpy(email,pemail);
}

stu::~stu()
{
    delete [] name;
    delete [] home;
    delete [] tel;
    delete [] email;
}

//====================================================

