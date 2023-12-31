#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

	

   int main(int argc, char const *argv[])
   {
   	struct tm t;
    t.tm_sec = 0;
    t.tm_min = 0;
    t.tm_hour = 0;
    t.tm_mday = 1;
    t.tm_mon = 0;
    t.tm_year = 2024-1900;
    t.tm_wday = 0;
   	printf("%lld\n",mktime(&t));
   	getchar;
   	return 0;
   }