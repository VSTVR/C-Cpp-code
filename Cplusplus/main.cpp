#include "head.h"

//史上最令人吞鲲的迷你小游戏

int obj::number=0;

template<typename T>
T getevaluate(T a[4])
{
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<"   ";
    }
    cout<<"\n";
}


int main(void)
{
    obj kun("鲲","体型巨大、遨游四方、",200,1000);
    kun.print();
    obj yuanmo("猿魔","鲲是什么、一口吃掉",1000,200);
    yuanmo.print();

    string t;
    cout<<"发现一条鲲，是否想要吞噬它？（yes/no）： ";
    cin>>t;
    if(t=="yes")
    {
        system("cls");
        obj temp("temp","",0,0);
        temp=kun+yuanmo;
        temp.print();


        cout<<"你想要繁衍强大的后代吗？（yes/no）:";
        cin>>t;
        cout<<"\n";
        if(t=="yes")
        {
            system("cls");
            objplus daojin1("道境·猿魔","长虹贯日、一击必杀、",3000,1900,"太郎");
            daojin1.printall();
            objplus daojin2("道境·骨鲲","软骨攻击、装逼圣典、",100,0,"次郎");
            daojin2.printall();
            objplus daojin3("道境·尸鲲","起死回生、攻击加成",1500,1400,"三郎");
            daojin3.printall();
            cout<<"你想要继续进行吞噬吗？（yes/no）";
            cin>>t;
            cout<<"\n";
            if(t=="yes")
            {
                system("cls");
                objplus temp("tem","",0,0,"无");
                temp=daojin1+daojin2;
                temp=temp+daojin3;
                temp.printall();

                double steamscore[4]={59.9,59.99,59.999,59.9999};
                string wegamescore[4]={"shenmegui?","我的100块","好玩啊，大家快下载","What the fuxk!!"};
                cout<<"steam 上对此游戏的评分：";getevaluate(steamscore);
                cout<<"wegame上对此游戏的评价：";getevaluate(wegamescore);

            }

        }
    }


    return 0;
}




/*int CSciJournal::number=0;

int main(void)
{
    CSciJournal c1("计算机图形学报","中国科学院",10,0.8);
    CSciJournal c2("生物医学工程学报","中国科学院",20,0.6);
    //CSciJournal *c1=new CSciJournal("计算机图形学报","中国科学院",10,0.8);
    //CSciJournal *c2=new CSciJournal("生物医学工程学报","中国科学院",20,0.6);
    cout<<"创建了"<<CSciJournal::number<<"个CSiJournal对象！！\n"<<endl;
    cout<<"修改前：\n"<<endl;
    c1.print();
    cout<<"\n";
    c2.print();
    cout<<"------------------------------------\n"<<endl;

    c1.setname("计算机图形图像学报");
    c2.setfactor(1);

    cout<<"修改后: \n"<<endl;
    c1.print();
    cout<<"\n";
    c2.print();

    return 0;
}



/*
int main()
{
    int a[4]={1,2,3,4};
    float b[4]={1.1,2.2,3.3,4.4};
    char c[4]={'a','b','c','d'};

    CArray<int> arr1(a,4);
    CArray<float> arr2(b,4);
    CArray<char> arr3(c,4);

    arr1.showarray();
    arr2.showarray();
    arr3.showarray();
    return 0;
}




/*double f(double x,double y,double*b)
{
    double a;
    a=sqrt(x*x+y*y);
    *b=atan(y/x);
    return a;
}

int main()
{
    double a,b;
    double x,y;
    cin>>x>>y;
    a=f(x,y,&b);
    cout<<"a="<<a<<"  "<<"b="<<b;
    return 0;
}

/*class student
{
private:
    string name;double grade1,grade2,grade3;
public:
    student(string id,double a,double b,double c):name(id),grade1(a),grade2(b),grade3(c){}
    void outputaver();
};

void student::outputaver()
{
    double result;
    result=(this->grade1+this->grade2+this->grade3)/3;
    cout<<this->name<<"的平均成绩："<<result<<endl;
}
int main()
{
    student stu[3]={{"万其伟",98,90,70},{"谢莹鹏",100,100,100},{"王利锋",59.99,59.99,59.99}};
    for(int i=0;i<3;++i)
    {
        stu[i].outputaver();
    }
    return 0;
}
*/
