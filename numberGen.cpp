#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	int min;
	int max;
	
	printf("Enter the minimum number: ");
	scanf("%i", &min);
	
	printf("Enter the maximum number: ");
	scanf("%i", &max);
	
	srand(time(NULL));
	printf("\nThe number is: %d", rand() % (max - min + 1) + min); 
	
	system("pause >nul");
	return 0;
}
