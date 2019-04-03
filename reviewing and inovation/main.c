#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "review.h"
#include <time.h>
#include <conio.h>
#include <windows.h>
#define N 4
#define KON printf("\n");

int main(void)
{
    int a[4]={1,2,3,4};
    int **nums=(int**)malloc(sizeof(int*)*4);
    int i;
    for(i=0;i<4;i++)
    {
        nums[i]=&a[i];
    }
    printf("%d",nums[0]);
    return 0;
}




/*int main(void)
{
    TNode *tree;
    tree=create(tree);
    preorder(tree);
    inorder(tree);
    postorder(tree);
    return 0;
}


/*int main(void)
{
    //创建索引
    int nums[N]={1,2,3,4};int index[N];
    int i;
    for(i=0;i<N;i++)
    {
        index[i]=i;
    }
    //开始！
    int m=1;
    while(m!=pow(N,N)-N)
    {
        if(nosame(index)!=10)
        {
            printf("%d %d %d %d\n",nums[index[0]],nums[index[1]],nums[index[2]],nums[index[3]]);//changeable
        }
        jinzhi(index);
        m++;

    }
    return 0;
}



/*int main()
{
    int a[4]={0,0,0,0};
    ch(a);

    return 0;
}


/*main(void)
{
    int i,j;
    int nums[2][2]={
    {1,2},
    {3,4},
    };

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",nums[i][j]);
        }
        printf("\n");
    }
    printf("--------------\n");
    ch(nums);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}





//用一个变量打印二维数组
/*main(void)
{
    int nums[2][2]={
    {1,2},{3,4},
    };
    int i;
    for(i=0;i<4;i++)
    {
        if(i%2==0)
        {
            printf("\n");
        }
        printf("%d",nums[0][i]);
    }
    return 0;
}



//数组的不变特性
/*main(void)
{
    int num[2]={1,2};
    func(num);
    printf("%d,%d",num[0],num[1]);
    return 0;
}
int func(int num[])
{
    num[0]=num[1];
}

/*int fei(int n)
{
    int z;
    if(n==1)
    {
        z=1;
    }else if(n==2)
    {
        z=1;
    }else{
        z=fei(n-1)+fei(n-2);
    }
    return(z);
}

main(void)
{
    int result,input;
    scanf("%d",&input);
    result=fei(input);
    printf("%d",result);
    return 0;
}

//快捷求大小
/*main(void)
{
    int x,y,z;int maxnum;
    scanf("%d,%d,%d",&x,&y,&z);
    maxnum=x>(y>z? y:z)? x:(y>z? y:z);
    printf("%d",maxnum);
    return 0;
}

/*main(void)
{
    char str1[]="man is bad ";
    char str2[]="women is worse";
    puts(strcat(str1,str2));
    return 0;
}


/*int main()
{
    char c[10];
    scanf("%s",&c);
    printf("%s\n",c);
    printf("%c",c[1]);
    return 0;
}



/*int main()
{
    int a=1,b=2;int*ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    change(ptr1,ptr2);
printf("%d %d",*ptr1,*ptr2);
    return 0;
}


/*int main()
{
    int a;
    chana();
    return 0;
}




/*main()
{
    int len;
    char nums[200];
    nums[]="aaa";
    len=strlen(nums);
    printf("%d",len);
    return 0;
}


/*int main()
{
    int i;
    char ch[10][10]={"零","一","二","三","四","五","六","七","八","九"};
    ;


    return 0;
}

/*int main()
{
    int i;double sum=0;int maxscore=0,maxindex;
    for(i=0;i<5;i++)
    {
        printf("请输入第%d个学生的学号：",i+1);scanf("%d",&stu[i].id);
        printf("请输入第%d个学生的名字：",i+1);scanf("%s",&stu[i].name);
        printf("请输入第%d个学生的成绩：",i+1);scanf("%lf",&stu[i].score);
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        sum+=stu[i].score;
    }
    printf("平均成绩是：%.2lf分。\n",sum/5);
    for(i=0;i<5;i++)
    {
        if(maxscore<stu[i].score)
        {
            maxscore=stu[i].score;
            maxindex=i;
        }
    }
    printf("最高分学生信息：\n");
    printf("学号:%d\n",stu[maxindex].id);
    printf("姓名:%s\n",stu[maxindex].name);
    printf("成绩:%.1lf\n",stu[maxindex].score);
    return 0;
}




/*int swamp(int*x,int*y);
int swamp(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int a,b,c;int*pa,*pb,*pc;
    pa=&a;pb=&b;pc=&c;
    printf("请输入3个整数：");
    scanf("%d",pa);scanf("%d",pb);scanf("%d",pc);

    //judge
    if(*pa>*pb)
    {
        swamp(pa,pb);
    }
    if(*pa>*pc)
    {
        swamp(pa,pc);
    }
    if(*pb>*pc)
    {
        swamp(pb,pc);
    }

    printf("%d%d%d",*pa,*pb,*pc);
}



/*int main()
{
    int a = 3,b=6;
    int *p1,*p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = p1;
    *p3 = 8;
    printf("%d %x %x %d %x\n", a, &a, p3, *p3, &p3);
    printf("%d %d\n",a, b);

    return 0;
}




/*int fib(int n);
int fib(int n)
{
    if(n==0)
    {
        return(0);
    }else if(n==1)
    {
        return(1);
    }else{
      return(fib(n-1)+fib(n-2));
    }
}

int main()
{
    int n,i,result;
    printf("请输入斐波拉契数列的n值：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result=fib(i);
        printf("%d ",result);
    }
    return 0;
}



/*int main()
{
    int a = 3,b=6;
    int *p1,*p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = p1;
    *p3 = 8;
    printf("%d %x %x %d %x\n", a, &a, p3, *p3, &p3);
    printf("%d %d\n",a, b);
    return 0;
}



/*int main()
{
    //创建方阵
    int shuzu[100][100];int i,j,n;int sum1=0,sum2=0;
    printf("请输入方阵的长度(最大值为100):");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("请输入数组%d行%d列的元素：",i+1,j+1);
            scanf("%d",&shuzu[i][j]);
        }
    }
    //进行对角线运算
    for(i=0;i<n;i++)
    {
        sum1+=shuzu[i][i];
    }
    for(j=0;j<n;j++)
    {
        sum2+=shuzu[j][n-1-j];
    }
    printf("主对角线之和：%d\n",sum1);
    printf("副对角线之和：%d\n",sum2);

    return 0;
}





/*int paixu(int shuzu[],int n);
int paixu(int shuzu[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(shuzu[i]<shuzu[j])
            {
                temp=shuzu[i];
                shuzu[i]=shuzu[j];
                shuzu[j]=temp;
            }
        }
    }
}


int main()
{
    int shuzu[100],n,i,j;
    printf("请输入数组的位数n：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("请输入第%d个元素的值：",i+1);
        scanf("%d",&shuzu[i]);
    }
    for(i=n;i<100;i++)
    {
        shuzu[i]='\0';
    }

    paixu(shuzu,n);
    for(j=0;j<n;j++)
    {
        printf("%d>",shuzu[j]);
    }
    return 0;
}



/*int main()
{
    char ch1[100],ch2[100];int i;int ch1o,ch2o;
    printf("请输入ch1的值：");
    gets(ch1);
    printf("请输入ch2的值：");
    gets(ch2);
    for(i=0;i<='\0';i++)
    {
        ch1o=ch1[i];ch2o=ch2[i];
        if(ch1o>ch2o)
        {
            printf("ch1比较大！");
        }else if(ch1o<ch2o)
        {
            printf("ch2比较大！");
        }
    }
    return 0;
}


/*int main()
{
    int i,j;
    for(i=50;i<=100;i++)
    {
        for(j=2;j<=10;j++)
        {
            if(i%j==0)
            {
                break;
            }
            if(i%j!=0)
            {
                if(j==10)
                {
                    printf("%d ",i);
                }
            }
        }
    }
    return 0;
}




/*int main()
{
    double stu[8];int i,j,k;double average,sum=0;int num=0;
    for(i=0;i<8;i++)
    {
        printf("请输入第%d个同学的成绩：",i+1);
        scanf("%lf",&stu[i]);
    }
    for(j=0;j<8;j++)
    {
        sum=sum+stu[j];
    }
    average=sum/8;
    for(k=0;k<8;k++)
    {
        if(stu[k]>average)
        {
            num++;
        }
    }

    printf("有%d个学生的成绩高于平均分！",num);
    return 0;
}


//读取文件，计算单词的数目
/*int main()
{
    FILE*fp;
    char ch[1000],filename[10];int nums=0;int i=0;int j=1;

    //读取文件
    printf("请输入读取文件的名字：");
    gets(filename);
    if((fp=fopen(filename,"r"))==NULL)
    {
        printf("cannot open this file!");
        exit(0);
    }

    //将文件中的字符储存到数组中
    while(!feof(fp))
    {
        ch[i]=fgetc(fp);
        i++;
    }
    //判断单词的数目
    while(ch[j]!='\0')
    {
        if(ch[j]==' ' && ch[j-1]!=' ')
        {
            nums++;
        }
        j++;
    }

    //打印
    printf("文章中共有%d个单词",nums+1);
    fclose(fp);
    return 0;
}

/*int main()
{
   char shuzu[50];char c;
   int i,nums=0,word=0;
   gets(shuzu);
   for(i=0;(c=shuzu[i])!='\0';i++)
   {
        if(c==' ')
        {
            word=0;
        }else if(word==0)
        {
            word=1;nums++;
        }
   }
    printf("这个句子中有%d个单词！",nums);
    return 0;
}

/*int main(void)
{
    char kaishi,ask,jieshu;char ans;
    int fenzi,fenmu;int i,input;
kaishi:
    fenzi=1;fenmu=1;
    printf("1+1/2+1/3+1/4+....+1/n,请输入n的值：");
    scanf("%d",&input);
    for(i=1;i<=(input-1);i++)
    {
        fenzi=fenzi*(i+1)+1*fenmu;
        fenmu=fenmu*(i+1);
    }

    while(fenzi%2==0 && fenmu%2==0)
    {
        fenzi=fenzi/2;
        fenmu=fenmu/2;
    }
    printf("%d/%d\n",fenzi,fenmu);

ask:
    printf("Do you want to try that again?(y/n)");
    scanf("%s",&ans);
    if(ans=='y')
    {
        goto kaishi;
    }else if(ans=='n')
    {
        goto jieshu;
    }else{
    goto ask;
    }
jieshu:
    return 0;
}










/*int main(void)
{
    int fenzi=1,fenmu=1;int input,i;
    printf("1+1/2+1/3+.....+1/n ,please input n:");

	return 0;
}

   /* FILE*in,*out;
    char ch,infile[10],outfile[10];
    printf("please input the readable file 's name:");
    gets(infile);
    printf("please input the writable file 's name:");
    gets(outfile);

    if((in=fopen(infile,"r"))==NULL)
       {
           printf("can not open this file!\n");
           exit(0);
       }
    if((out=fopen(outfile,"w"))==NULL)
    {
        printf("cannot open this file!");
        exit(0);
    }
    ch=fgetc(in);
    while(!feof(in))
        {
            fputc(ch,out);
            ch=fgetc(in);
        }
    putchar(10);      //换行
    fclose(in);fclose(out);
  return 0;
}

    /*srand(time);
    int a,b,c,d;
    do
    {
        a=rand()%10;b=rand()%10;c=rand()%10;d=rand()%10;
    }while((a+b+c+d)!=10 || a==b==c==d ||b==c==d || c==d);
   printf("%d%d%d%d",a,b,c,d);

   /*puts("hello");
   /* FILE * fp;
    char ch,filename[10];
    printf("请输入想要生成的txt文档的名字：");
    scanf("%s",filename);
    getchar();
    fp=fopen(filename,"a");
    if(fp==NULL)
    {
        printf("无法创造这个文件！");
        exit(0);
    }


    printf("请输入一个想要进入这个文件的字符串：（以#结尾）：");
    ch=getchar();
    while(ch!='#')
    {
        fputc(ch,fp);
        ch=getchar();
    }
    fclose(fp);


    /*FILE*fp;
    char s[]="HelloWorld!";
    char c='\n';
    fp=fopen("mass.txt","a");
    fprintf(fp,"%s",s);
    fprintf(fp,"%c",c);
    fclose(fp);



    /*int i;
    FILE*fp=fopen("mass.txt","w");
    if(fp==NULL)
    {
        return 0;
    }
    for(i=0;i<5;i++)
    {
        fprintf(fp,"%d ",i);
    }
    fclose(fp);


    /*FILE*fp;
    char ch,filename[10];
    printf("please input the file you want to open:");
    scanf("%s",filename);
    getchar();
    if((fp=fopen(filename,"w"))==NULL)
    {
        printf("can not open the  file!\n");
        exit(0);
    }
    printf("please input a digit which want to be saved in the file（end with #）:");
    ch=getchar();
    while(ch!='#')
    {
        fputc(ch,fp);
        putchar(ch);
        ch=getchar();
    }
    fclose(fp);
    putchar(10);*/

/* int i=-1,j;
 fabs(i);
 printf("%d",i);

 /*int nums[5]={
     {1,2,3},
     {4,5,6},
 };
 int i;
 i=max(nums);
 printf("the maxnum is:%d",i);

 /*int maxindex,maxnum=0;int nums[5];int i,j;
 for(i=0;i<5;i++)
 {
     printf("please input the No.%d digit:",i+1);
     scanf("%d",&nums[i]);
 }

 for(j=0;j<5;j++)
 {
     if(maxnum<nums[j])
     {
         maxnum=nums[j];
         maxindex=j;
     }

 }

 printf("the largest index is:%d",j);
 return 0;
}
/*int main(void)
{
 double a,b,c,x;
 printf("ax+b=c,please input the digit:");
 scanf("%lf%lf%lf",&a,&b,&c);
 printf("ans:x=%.2lf",(c-b)/a);



/* struct Account sfls;
 sfls.money=1000;
 sfls.bill=800;
 double result=getpayment(&sfls);
 printf("%.2lf\n",result);

 /*struct Account sfls;
 sfls.bill=.....
 /*printf("%5s","red");
 /*enum Color {red,yellow,blue,white,black};
 enum Color i,j,k,pri;
 int n,loop;
 n=0;
 for(i=red;i<=black;i++)
 {
     for(j=red;j<=black;j++)
     {
         if(i!=j)
         {
             for(k=red;k<=black;k++)
             {
                 if((k!=i) && (k!=j))
                 {
                     n+=1;
                     printf("%-4d",n);
                     for(loop=1;loop<=3;loop++)
                     {
                         switch(loop)
                         {
                         case 1:
                             pri=i;break;
                         case 2:
                             pri=j;break;
                         case 3:
                             pri=k;break;
                         default:
                             break;
                         }
                     switch(pri)
                     {
                     case red:
                         printf("%-10s","red");break;
                     case yellow:
                         printf("%-10s","yellow");break;
                     case blue:
                         printf("%-10s","blue");break;
                     case white:
                         printf("%-10s","white");break;
                     case black:
                         printf("%-10s","black");break;
                     default:
                         break;
                     }
                     }
                 printf("\n");
                 }
             }
         printf("\n total:%5d\n",n);
         }
     }
 }





 /*int i,j;
 for(i=0;i<3;i++)
 {
     printf("name:");
     scanf("%s",&stu[i].names);
     scanf("%d%d%d",&stu[i].birthday.year,&stu[i].birthday.month,&stu[i].birthday.day);
 }

 for(j=0;j<3;j++)
 {
     printf("姓名：%s %d年%d月%d日\n",stu[j].names,stu[j].birthday.year,stu[j].birthday.month,stu[j].birthday.day);
 }


/* int a,b,c,d,e,f,g,h;
 srand(time);
 a=rand()%10;b=rand()%10;c=rand()%10;d=rand()%10;e=rand()%10;f=rand()%10;g=rand()%10;h=rand()%10;
 do
 {
     a=rand()%10;b=rand()%10;c=rand()%10;d=rand()%10;e=rand()%10;f=rand()%10;g=rand()%10;h=rand()%10;
 }while(a+b+c+g+h != d+e+f+g+h || a==b ||a==c||a==d||a==e||a==f||a==g||a==h);

printf("%d+%d+%d+%d+%d=%d+%d+%d+%d+%d",a,b,c,g,h,g,h,d,e,f);
/*struct student temp;
 int i,j;
 for(i=0;i<3;i++)
 {
     printf("name:");scanf("%s",&students[i].names);
     printf("level:");scanf("%d",&students[i].level);
     printf("sex:");scanf("%s",&students[i].sex);
     printf("grade:");scanf("%d",&students[i].score);
     printf("\n");
 }

 int x,y;
 for(x=0;x<2;x++)
 {
     for(y=0;y<2-x;y++)
     {
         if(students[y].score<students[y+1].score)
           {

              temp=students[y];
             students[y]=students[y+1];
             students[y+1]=temp;
         }
     }
 }



 for(j=0;j<3;j++)
 {
     printf("姓名%s\t 等级%d\t 性别%s \n",students[j].names,students[j].level,students[j].sex);

 }*/
//  return 0;
//}
