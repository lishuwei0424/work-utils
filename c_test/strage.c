/*
made by lishuwei  20200928
*/
#include<stdarg.h>
#include <stdio.h>
//可变参数
void hlog(int size,char *data,...)
{
    char* str=NULL;
    va_list  sagrv;
    va_start(sagrv,data) ;
    for(int i=0;i<size;i++)
    {
       str=va_arg(sagrv,char*);
       printf("%s\n",str);
    }
    va_end(sagrv);
}
int main(int argc, char *argv[])
{
     char* data="INFO";
      printf("%s\n",data);
     for(int i=1;i<argc;i++)
       hlog(1,data,argv[i]);

    return 0;
}