#include  "easy_log.h"

int main()
{ 
  char  str[24]="lishuwei";
  log_debug("%s",str);
  log_info("%s",str);
  log_warn("%s",str);
  log_err("%s",str);

   return 1;
}