#include "head.h"

//ʷ�����������������С��Ϸ

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
    obj kun("��","���;޴������ķ���",200,1000);
    kun.print();
    obj yuanmo("Գħ","����ʲô��һ�ڳԵ�",1000,200);
    yuanmo.print();

    string t;
    cout<<"����һ����Ƿ���Ҫ����������yes/no���� ";
    cin>>t;
    if(t=="yes")
    {
        system("cls");
        obj temp("temp","",0,0);
        temp=kun+yuanmo;
        temp.print();


        cout<<"����Ҫ����ǿ��ĺ���𣿣�yes/no��:";
        cin>>t;
        cout<<"\n";
        if(t=="yes")
        {
            system("cls");
            objplus daojin1("������Գħ","������ա�һ����ɱ��",3000,1900,"̫��");
            daojin1.printall();
            objplus daojin2("����������","��ǹ�����װ��ʥ�䡢",100,0,"����");
            daojin2.printall();
            objplus daojin3("������ʬ��","���������������ӳ�",1500,1400,"����");
            daojin3.printall();
            cout<<"����Ҫ�������������𣿣�yes/no��";
            cin>>t;
            cout<<"\n";
            if(t=="yes")
            {
                system("cls");
                objplus temp("tem","",0,0,"��");
                temp=daojin1+daojin2;
                temp=temp+daojin3;
                temp.printall();

                double steamscore[4]={59.9,59.99,59.999,59.9999};
                string wegamescore[4]={"shenmegui?","�ҵ�100��","���氡����ҿ�����","What the fuxk!!"};
                cout<<"steam �϶Դ���Ϸ�����֣�";getevaluate(steamscore);
                cout<<"wegame�϶Դ���Ϸ�����ۣ�";getevaluate(wegamescore);

            }

        }
    }


    return 0;
}




/*int CSciJournal::number=0;

int main(void)
{
    CSciJournal c1("�����ͼ��ѧ��","�й���ѧԺ",10,0.8);
    CSciJournal c2("����ҽѧ����ѧ��","�й���ѧԺ",20,0.6);
    //CSciJournal *c1=new CSciJournal("�����ͼ��ѧ��","�й���ѧԺ",10,0.8);
    //CSciJournal *c2=new CSciJournal("����ҽѧ����ѧ��","�й���ѧԺ",20,0.6);
    cout<<"������"<<CSciJournal::number<<"��CSiJournal���󣡣�\n"<<endl;
    cout<<"�޸�ǰ��\n"<<endl;
    c1.print();
    cout<<"\n";
    c2.print();
    cout<<"------------------------------------\n"<<endl;

    c1.setname("�����ͼ��ͼ��ѧ��");
    c2.setfactor(1);

    cout<<"�޸ĺ�: \n"<<endl;
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
    cout<<this->name<<"��ƽ���ɼ���"<<result<<endl;
}
int main()
{
    student stu[3]={{"����ΰ",98,90,70},{"лӨ��",100,100,100},{"������",59.99,59.99,59.99}};
    for(int i=0;i<3;++i)
    {
        stu[i].outputaver();
    }
    return 0;
}
*/
