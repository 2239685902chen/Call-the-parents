#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int q = 0, w = 0, e = 0, r = 0;
	scanf("%d%d%d", &q, &w, &e);
	r = (q + w + e) / 3;
	if (r < 60)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}