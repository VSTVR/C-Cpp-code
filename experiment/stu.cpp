#include "stu.h"


void stu::print()
{
    cout<<"����: "<<name<<endl;
    cout<<"סַ: "<<home<<endl;
    cout<<"�绰: "<<tel<<endl;
    cout<<"����: "<<email<<endl;
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

