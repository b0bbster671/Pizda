#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int GetNumber(int i, int a1, int a2, int k)
{
	if (a1 > INT_MAX - a2)
	{
		printf("!");
		return 0;
	}
	if (k == 1)
	{
		//printf("%3d  k=%d a1=%d a2=%d return 1; GetNumber=1\n", i, k, a1, a2);
		return 1;		
	}
	
	int a;
	a = a1 + a2;		

	/*printf("%3d  k=%d a1=%d a2=%d GetNumber(%d,%d,%d)\n", i, k, a1, a2, a1, a2, k-1);
	int result = GetNumber(i + 1, a2, a, k - 1);
	int sum = a2 + result;
	printf("%3d  return %d+%d; GetNumber=%d\n", i, a2, result, sum);
	return sum;*/

	return a2 + GetNumber(i + 1, a2, a, k - 1);
}

int main(void)
{
	int k;
	scanf("%d", &k);

	//printf("%3d  n=%d  GetNumber(%d,%d,%d)\n", 0, k, 1, 1, k);
	int result = GetNumber(1, 1, 1, k);

	if (result > 0)	
		printf("%d\n", result);

	return 0;
}
