#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	for(i=0; i<1000000; i++)
		getppid();
	return 0;
}
