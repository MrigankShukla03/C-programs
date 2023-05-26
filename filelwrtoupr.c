#include<stdio.h>
#include<string.h>
union car
{
	float cost;
	float speed;
	char model[15];
};
int main()
{
	union car c1;
	c1.cost=1200.50;
	c1.speed=80.20;
	strcpy(c1.model"tata");
	printf("%f\n%s\n",c1.cost,c1.speed,c1.model);
	printf("%f\n",c1.cost);
	printf("%f\n",c1.speed);
	printf("%s\n",c1.model);
	return 0;
}