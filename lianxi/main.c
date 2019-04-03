#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>
#define N 5
#define PI 3.141592653
#include <time.h>
double circle(double);
#define USERNAME "abc"
#define PASSWORD "abc"

int main(void)
{

    return 0;
}






/*int login(char,char);
int login(char username[],char password[])
{




    /*if(strcmp(username,USERNAME)!=0 || strcmp(password,PASSWORD)!=0)
    {
        return 0;
    }
    return 1;
    }
}
int main()
{
    char username[20],password[20];
    printf("username:");gets(username);
    printf("password:");gets(password);
    if(login(username,password))
    {
        printf("success");
    }else{
         printf("fail");
    }

    //利用指针访问二维数组
    /*int nums[2][3]={
    {1,2,3},
    {4,5,6},
    };
    printf("%d",*(nums[1]+1));


    /*char*word="My heart is still";
    puts(word);


  /*     int i,j;
    for(i=1;i<=12;i++)
    {
        for(j=1;j<=12;j++)
        {
            if(i<j)
            {
                printf(" ");
            }else{
            printf("%-2d*%-2d=%3d\t",i,j,i*j);
            }
        }
        printf("\n");
    }


  /* PlaySound(TEXT("sounds\\Sia、David Guetta、Afrojack - Helium.flac"),
           NULL, SND_FILENAME | SND_SYNC | SND_LOOP);

   /* switch(5>8)
    {
    case 0:
        printf("no");
        break;
    case 1:
        printf("yes");
        break;
    }


     /*srand(time());
    int num=rand();
    printf("%d",num);



    /*int i,j;
    rand(i)%15;    //值在0-14之间
    rand(i)%15+5;  //值在5-19之间

    /*int i;char nums[5]={"1","2","3","4","5"};
    char need="5";
    for(i=0;i<5;i++)
    {
        if(strcmp(nums[i],"5")==0)
        {
            printf("%d",i);
        }else
        {
            i++;
        }
    }



    /*char i[7]="1234567";
   int len;
   len=sizeof(i)/sizeof(char);
   printf("%d",len);

    /*double scores[5]={1,2,3,4,5};
    printf("数组元素的数量为：%d\n",sizeof(scores) / sizeof(double));

/*   double nums[5]={1,2,3,4,5};
   int searchindex,i;double searchnum;
    printf("请输入想要查找的数据：");
    scanf("%lf",&searchnum);
    for(i=0;i<N;i++)
    {
        if(searchnum == *(nums+i))
        {
            printf("Find it! The index is %d\n",i+1);
            break;
        }
    }

   /* int i,j,z;int temp;
    int nums[5]={5,4,3,2,1};
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }
        }
    }
    for(z=0;z<5;z++)
    {
        printf("%d",nums[z]);
    }



/*int i,maxnum=0,maxindex;
    int nums[5]={3,2,5,1,4};
    for(i=0;i<5;i++)
    {
        if(maxnum<nums[i])
        {
            maxnum=nums[i];
            maxindex=i;
        }
    }
    printf("%d",maxindex+1);


    /*int nums[5];int i,j;int x,y;int temp;
    for(x=0;x<5;x++)
    {
        printf("\nplease input No.%d :",x+1);
        scanf("%d",&nums[i]);
    }


    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;
            }else{
            break;
            }
        }
    }
    int z;
    for(z=0;z<5;z++)
    {
        printf("%d\t",nums[z]);
    }





   //1一直加到input数的和
   /*int input,i;int sum =0;
   printf("please input a digit :");
   scanf("%d",&input);
   for(i=0;i<=input;i++)
   {
       sum+=i;
   }
   printf("0一直加到%d的总和是：%d",input,sum);


   char i=1234567;
   int len;
   len=sizeof(i)/sizeof(char);
   printf("%d",len);



   /* int nums[5];int i;
    for(i=0;i<5;i++)
    {
        printf("num.%d 's digit:",i+1);
        scanf("%d",&nums[i]);
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",nums[i]);
    }
//进行排序
    int temp;int x,y;
    for(x=0;x<4;x++)
    {
        for(y=0;y<4-x;y++)
        {
            if(nums[y]>nums[y+1])
            {
                temp=nums[y];
                nums[y]=nums[y+1];
                nums[y+1]=temp;
            }
            break;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d",nums[i]);
    }
    /*int i,j;
    for(i=1;i<16;i++)
    {
        for(j=1;j<=16;j++)
        {
            if(i<j)
            {
                printf(" ");
            }else
        {printf("%d*%d=%d",i,j,i*j);
        }
        }
    printf("\n");
    }



/*double i;double s;
scanf("%lf",&i);
printf("%.2lf",circle(i));*/
   /* return 0;
}

double circle(double a)
{
  double result;
  result=pow(a,2)*PI;
  return result;
}
*/

   //输入9*9输入法
   /* int i,j;int result;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
          result=i*j;
          printf("%d*%d=%d\t",i,j,result);
        }
        printf("\n");
    }






    /*int i,j;
    char names[N][10]={};
    for(i=0;i<N;i++)
    {
        printf("请输入第%d个同学的名字:",i+1);
        scanf("%s",&names[i]);
    }

    for(j=0;j<N;j++)
    {
        printf("%d、%s\n",i+1,names[j]);
    }*/





/*{
    double sum;int i=2;double result=2.0;
    sum=N*pow(result,i);
    printf("%.2lf",sum);
    return 0;
}












/*int main()
{
int calcSum();

int calcSum()
{
    int sum=0;int i=1;
    for(i=1;i<=100;i++)
    {
        if(i % 2 ==0)
            sum++;
    }
return sum;
}

int main()
{







/*void yuan();   //函数原型


void yuan()         //函数实现
{
    double r,s;
    printf("请输入圆的半径：");
    scanf("%lf",&r);
    s=3.14*pow(r,2);
    printf("s=%.2lf\n",s);
}

int main()
{
yuan();   //调用函数





/*int i;int*num;
num=(int*)malloc(sizeof(int)*5);
num[4]=9;
for(i=0;i<5;i++)
{
    printf("%d\n",num[i]);
}
free(num);


/*printf("%c",toupper('a'));

/*char i;
printf("请输入一个字母：");
scanf("%s",&i);
isupper(i);
switch(isupper(i))
{
case 0:
    printf("输入的是小写字母！");
    break;
case 1:
    printf("输入的是大写字母！");
    break;
}
//单独判断的写法是isupper("a")




/*int num=9;
int*ptr=&num;
printf("%d",*(ptr));
/*int i,j;
int score[3][2]={
       {1,2},
       {3,4},
       {5,6},
};
for(i=0;i<3;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%d\t",score[i][j]);
    }
printf("\n");
}






/*int array[]={15,20,25,30,35};
int i,temp;
int*ptr1=array;       //start
int*ptr2=array+4;     //end
while(ptr1 != ptr2)
{
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
  ptr1++;ptr2--;
}
for(i=0;i<5;i++)
{
    printf("%d\t",*(array+i));
}




/*for(i=0;i<2;i++)
{
    temp=array[i];
    array[i]=array[4-i];
    array[4-i]=temp;

}
for(i=0;i<5;i++)
{
    printf("%d\t",*(array+i));
}*/






/*int array[]={15,20,25,30,35};
int i;
int*ptr_array=array;
for(i=0;i<5;i++)
{
    printf("第%d个元素的值为%d，地址为%p\n",i+1,*(ptr_array+i),ptr_array+i);
}
*/





/*int i;
double*ptr_score;
double score[]={98,87,65,54,33};
ptr_score=score;
for(i=0;i<5;i++)
{
    printf("%.2lf\n",*ptr_score++);
}
*/

//输出三角图形
/*int i,j,k;
printf("请输入一个数字：\n");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
    for(j=1;j<=k;j++)
    {
        if(j>i)
        {
            printf(" ");
        }else
        {
            printf("*");
        }
    }
printf("\n");
}*/
