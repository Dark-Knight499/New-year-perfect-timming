#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
1704047400
//const long long int new_time= 1704047400;
 
int main(int argc, char const *argv[])
{
    const time_t new_time= 1704038400;
	long long int t;
	printf("New year Loading...\n");
	long long diff = 1;
	while(diff)
	{
    time(&t);
    diff = new_time-t;
    int hrs = (diff)/(60.0*60);
    int mins = ((diff)/(60.0*60) - hrs)*60.0;
    int secs= (((diff)/(60.0*60) - hrs)*60.0-mins)*60;
    if(diff == len)
    {
    	system("cat.mp4");
    }
    printf("%02d %02d %02d",hrs,mins,secs);
    sleep(1);
    printf("\r");
	}
	system("cls");
	printf("                             			|    ______________   |\n");
	printf("                             			|   |              |  |\n");
	printf("                             			|   |HAPPY NEW YEAR|  |\n");
	printf("                             			|   |______________|  |\n");
	printf("                             			|                     |\n\n");

	printf("         			 May this year be filled with joy ,happiness and prosperity");
}



/*
	
	struct tm t;
    t.tm_sec = 0;
    t.tm_min = 0;
    t.tm_hour = 0;
    t.tm_mday = 1;
    t.tm_mon = 0;
    t.tm_year = 2024-1900;
    t.tm_wday = 0;
*/