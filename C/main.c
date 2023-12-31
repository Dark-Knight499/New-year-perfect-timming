#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
struct Hny{
	char movie_name[100];
	char  file_name[100];
	unsigned int len;
};

void initialise(struct Hny *p)
{
	strcpy(p->movie_name, "Yeh Jawaani Hai Deewani");
	strcpy(p->file_name, "yjhd.mp4");
	p->len = 3;

	p++;

	strcpy(p->movie_name, "Endgame");
	strcpy(p->file_name, "endgame.mp4");
	p->len =72;

	p++;

	strcpy(p->movie_name, "Chippi Chippi");
	strcpy(p->file_name, "cat.mp4");
	p->len = 41;
}
int choice(struct Hny const *p,const int len)
{
		printf("Enter valid choice 1 or 2...\n");

		for (int i = 0; i < len; ++i)
		{
			printf("%d) %s \n",i+1,p[i].movie_name);
		}

		int c = 0;
		scanf("%d",&c);
		fflush(stdin);
		system("cls");
		if(c<=0||c>len)
		{
			choice(p,len);
		}
		else
		{		
			printf("Choice selected  :  %s\n",p[c-1].movie_name );
			return c-1;
		}
}

int main(void)
{
	int arr_len = 3;
	struct Hny a[arr_len];
	initialise(a);
	int c = choice(a,arr_len);
	int len = a[c].len;
	printf("File selected    :  %s\n",a[c].file_name );
	 const time_t new_time= 1704047400;
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
    	system(a[c].file_name);
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

	getchar();
	return 0;
}
