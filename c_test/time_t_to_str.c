#define _CRT_SECURE_NO_WARNINGS
#include <time.h>  
#include<stdio.h>
#define   TZ_TIMETH_LENG  64
typedef struct
{
	int iYear;      //年
	int iMonth;     //月
	int iDay;       //日
	int iHour;      //时
	int iMin;       //分
	int iSecond;    //秒	
	int iMsecond;   //毫秒
}UTIL_IVMS_TIME_T;

int main()
{
	time_t timep;
    struct tm *info;

	time(&timep);  /*得到time_t类型的UTC时间*/
	printf("timep:%d\n", timep);
    
	char pTimeStr[TZ_TIMETH_LENG] = {0};

    //返回本地时间的tm
    info = localtime(&timep);
    sprintf(pTimeStr,"%4d-%2d-%2dT%2d:%2d:%2dZ",info->tm_year+1900,info->tm_mon+1,info->tm_mday,info->tm_hour,info->tm_min,info->tm_sec);
	printf("pTimeStr:%s\n", pTimeStr);

	UTIL_IVMS_TIME_T pstruTime;
	sscanf(pTimeStr, "%4d-%2d-%2dT%2d:%2d:%2dZ", &pstruTime.iYear, &pstruTime.iMonth, &pstruTime.iDay,
		&pstruTime.iHour, &pstruTime.iMin, &pstruTime.iSecond);
	pstruTime.iMsecond = 0;
  
	struct tm struTm={0};
	struTm.tm_year=pstruTime.iYear - 1900;
	struTm.tm_mon=pstruTime.iMonth - 1;
	struTm.tm_mday=pstruTime.iDay;
	struTm.tm_hour=pstruTime.iHour;
	struTm.tm_min=pstruTime.iMin;
	struTm.tm_sec=pstruTime.iSecond;

    //返回的是UTC时间
	time_t  timeStamp = mktime(&struTm);
	printf("timeStamp:%d\n", timeStamp);
	printf("dur:%d\n", (timeStamp-timep)/3600);

	struct tm *p;
	p = gmtime(&timep); /*得到tm结构的UTC时间*/
    sprintf(pTimeStr,"%4d-%2d-%2dT%2d:%2d:%2dZ",info->tm_year+1900,info->tm_mon+1,info->tm_mday,info->tm_hour,info->tm_min,info->tm_sec);
	printf("pTimeStr:%s\n", pTimeStr);

	sscanf(pTimeStr, "%4d-%2d-%2dT%2d:%2d:%2dZ", &pstruTime.iYear, &pstruTime.iMonth, &pstruTime.iDay,
		&pstruTime.iHour, &pstruTime.iMin, &pstruTime.iSecond);
	pstruTime.iMsecond = 0;
  
	struTm.tm_year=pstruTime.iYear - 1900;
	struTm.tm_mon=pstruTime.iMonth - 1;
	struTm.tm_mday=pstruTime.iDay;
	struTm.tm_hour=pstruTime.iHour;
	struTm.tm_min=pstruTime.iMin;
	struTm.tm_sec=pstruTime.iSecond;

    //返回的是UTC时间
	timeStamp = mktime(&struTm);
	printf("timeStamp:%d\n", timeStamp);
	printf("dur:%d\n", (timeStamp-timep)/3600);

	return 0;
}