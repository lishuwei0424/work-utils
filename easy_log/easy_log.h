
#ifndef _EASY_LOG_
#define _EASY_LOG_


#ifdef __cplusplus
extern "C" {
#endif

#define LOG_LEVEL_DEBUG   3
#define LOG_LEVEL_INFO    2
#define LOG_LEVEL_WARN    1
#define LOG_LEVEL_ERROR   0

int log_print(int log_level,const char * pformat, ...);

#define log_debug(...)    log_print(LOG_LEVEL_DEBUG,##__VA_ARGS__)
#define log_info(...)     log_print(LOG_LEVEL_INFO,##__VA_ARGS__)
#define log_warn(...)     log_print(LOG_LEVEL_WARN,##__VA_ARGS__)
#define log_err(...)      log_print(LOG_LEVEL_ERROR,##__VA_ARGS__)
#define log_alert(...)    log_print(LOG_LEVEL_ALERT,##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif //_EASY_LOG_
