#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdarg.h>

#include "easy_log.h"

#define BUFF_MAX (1024) 

const char*  log_level_str[] = {   
        "ERROR",
        "WARN",
        "INFO",
        "DEBUG"
};

char* get_log_level_str(int level)
{
     return  log_level_str[level];
}

int log( int level,const char *pformat, va_list _va_list)
{
    FILE* pfile=NULL;
	time_t t;
	struct tm *tmp;
	unsigned int len = 0;
    char szbuf[BUFF_MAX]={0};
    
    if (pformat == NULL) 
    {
	    return -1;
    }

	t = time(NULL);
	tmp = localtime(&t);

	memset(szbuf,0,256);
    sprintf(szbuf, "haha.log");
	pfile = fopen(szbuf, "a");
	
    if(NULL != pfile)
	{
        len = sprintf(szbuf,"[%04d-%02d-%02d %02d:%02d:%02d][%s] ",
		tmp->tm_year+1900,tmp->tm_mon+1,tmp->tm_mday,tmp->tm_hour,tmp->tm_min,tmp->tm_sec,get_log_level_str(level));
	    len += vsprintf(szbuf + len, pformat, _va_list);    
		fseek(pfile,0L,SEEK_END);
		fwrite(szbuf,len,1,pfile);
		fwrite("\n",1,1,pfile);
    }
   fclose(pfile);
    return 0;
}

int log_print(int log_level,const char * format, ...)
{
	va_list list;
	va_start(list, format);
    log(log_level,format, list);
	va_end(list);	
	return 0;
}
