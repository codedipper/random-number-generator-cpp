#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
	int min;
	int max;
	
	if (argc == 3)
	{
		min = stoi(argv[1]);
		max = stoi(argv[2]);
		
		printf("Minimum number: %s", argv[1]);
		printf("\nMaximum number: %s", argv[2]);
		
		srand(time(NULL));
		printf("\n\nThe number is: %i", rand() % (max - min + 1) + min);
		
		system("pause >nul");
		return 0;
	}
	
	printf("Enter the minimum number: ");
	scanf("%i", &min);
	
	printf("Enter the maximum number: ");
	scanf("%i", &max);
	
	srand(time(NULL));
	printf("\nThe number is: %d", rand() % (max - min + 1) + min); 
	
	system("pause >nul");
	return 0;
}
