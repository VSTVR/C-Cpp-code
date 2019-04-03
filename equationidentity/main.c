#include "head.h"

int main()
{
    num_stack shuzhan=initnumstack();
    str_stack fuzhan=initstrstack();
    push_str_instrstack(fuzhan,'#');
    char input[20];int a,b;char fuhao;
    gets(input);

    int i=0;
    while(input[i]!='#' || knowtop_strstack(fuzhan)!='#')
    {
        if(isin_op(input[i])!=1)
        {
            push_num_innumstack(shuzhan,turnstrtonum(input[i]));
            i++;
        }else{
            switch(percede(knowtop_strstack(fuzhan),input[i]))
            {
            case '<':
                push_str_instrstack(fuzhan,input[i]);
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
                push_num_innumstack(shuzhan,cal(a,fuhao,b));
                break;
            }
        }
    }
    printf("%d",knowtop_numstack(shuzhan));
    return 0;
}
