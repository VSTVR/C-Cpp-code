
#include "head.h"
int main()
{
    str_stack fuzhan=initstack();pushin_strstack(fuzhan,'#');
    num_stack shuzhan=Initstack();
    char input[20];int a,b;char fuhao;
    printf("请输入表达式：");
    gets(input);
    int i=0;
    while(input[i]!='#' || knowtop_strstack(fuzhan)!='#')
    {
        if(isfuhao(input[i])==13)
        {
            char *cen;
            cen=cutstr(input,i);
            puts(cen);
        }else{
         i++;
           /* switch(perish(knowtop_strstack(fuzhan),input[i]))
            {
            case '<':
                pushin_strstack(fuzhan,input[i]);
                i++;
                break;
            case '=':
                delete_strstacktop(fuzhan);
                i++;
                break;
            case '>':
                b=gettop_numstack(shuzhan);
                a=gettop_numstack(shuzhan);
                fuhao=gettop_strstack(fuzhan);
                push_num_intonumstack(shuzhan,cal(a,fuhao,b));//
                break;
            }*/
        }
    }
    printf("%d",knowtop_numstack(shuzhan));
    return 0;
}
