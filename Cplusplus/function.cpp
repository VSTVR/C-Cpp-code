#include "head.h"

//obj

obj::obj(string nam,char*chen="",float att=0,float def=0)
{
    name=nam;
    chenhao=new char[strlen(chen)+1];strcpy(chenhao,chen);
    attack=att;
    defence=def;
    number++;
}

obj::~obj()
{
    delete [] chenhao;
    number--;
}

obj obj::operator+(obj b)
{
    cout<<"\n\n修仙，开始了！\n\n"<<endl;
    obj temp("噬鲲·猿魔","",0,0);

    temp.chenhao=new char[strlen(this->chenhao)+strlen(b.chenhao)+2];
    strcat(temp.chenhao,this->chenhao);
    strcat(temp.chenhao,b.chenhao);

    temp.attack=this->attack+b.attack;
    temp.defence=this->defence+b.defence;
    number--;
    return temp;
}

void obj::print()
{
    cout<<"异兽名字："<<name<<endl;
    cout<<"称号："<<chenhao<<endl;
    cout<<"攻击力："<<attack<<endl;
    cout<<"防御力："<<defence<<endl;
    cout<<"当前异兽数量："<<number<<endl;
    cout<<"\n\n\n";
}

/*char* obj::getmessage(string *nam,char*chen,float *att,float *def)
{
    *nam=name;

    chen=new char[strlen(chenhao)+1];
    strcpy(chen,chenhao);

    *att=attack;
    *def=defence;
    return chen;


}
*/
//objplus

void objplus::printall()
{
    //string name; char*chen;float attack,defence;//
    //chen=getmessage(&name,chen,&attack,&defence);
    cout<<"异兽名字："<<name<<endl;
    cout<<"称号："<<chenhao<<endl;
    cout<<"攻击力："<<attack<<endl;
    cout<<"防御力："<<defence<<endl;
    cout<<"身份："<<beifen<<endl;
    cout<<"当前异兽数量："<<1+(number-1)/2<<endl;
    cout<<"\n\n\n";
}

objplus objplus::operator+(objplus b)
{
    //string name; char*chen; float attack,defence;
    //chen=getmessage(&name,chen,&attack,&defence);

    objplus temp("tem","",0,0,"王者");//
    temp.name="终极·宇宙无敌超新星伽马巨雷蛇日天大猿魔";

    temp.chenhao=new char[strlen(this->chenhao)+strlen(b.chenhao)+2];
    strcat(temp.chenhao,this->chenhao);
    strcat(temp.chenhao,b.chenhao);

    temp.attack=this->attack+b.attack;
    temp.defence=this->defence+b.defence;

    return temp;
}


//help


/*
//CJournal

CJournal::CJournal(string nam,string pub,double pri)
{
    name=nam;
    publisher=pub;
    price=pri;
}

void CJournal::setname(string a)
{
    name=a;
}

string CJournal::getname()
{
    return name;
}

string CJournal::getpublisher()
{
    return publisher;
}

double CJournal::getprice()
{
    return price;
}

//CSciJournal



CSciJournal::~CSciJournal()
{
    number--;
}

void CSciJournal::print()
{
    cout<<"Name: "<<getname()<<endl;
    cout<<"Publisher: "<<getpublisher()<<endl;
    cout<<"Price: "<<getprice()<<endl;
    cout<<"Factor: "<<factor<<endl;
}

void CSciJournal::setfactor(float a)
{
    factor=a;
}

*/






