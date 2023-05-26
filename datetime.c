#include <stdio.h>
#include <time.h>
int main() 
{
	struct tm *ptr;
	time_t t;
	time(&t);
	ptr=localtime(&t);
	printf("%s",asctime(ptr));
	printf("%s",ctime(&t));
	return 0;
}