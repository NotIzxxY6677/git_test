#include <stdio.h>
#include <math.h>

int main() {
	int x,y;
	printf("Enter X : ");
	scanf("%d",&x);
	printf("Enter Y : ");
	scanf("%d",&y);
	int power = pow(x,y);
	printf("%d\n", power);
	return 0;
}
