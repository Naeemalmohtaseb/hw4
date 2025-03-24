#include "../src/a1.h"
#include <stdio.h>

void
printvs(vector *v, int n)
{
	for(int i = 0; i < n; ++i)
		printf("%f %f %f\t", v[i].x, v[i].y, v[i].z);
	printf("\n");
}

int
main()
{
	int n = 3;

	scalar m[] = {1, 1, 1};
	vector r[] = {{+0.9700436,   -0.24308753, 0},
	              {-0.9700436,   +0.24308753, 0},
	              {0, 0, 0}};
	vector a[n];

	vector aref[] = {{-1.2124160398001109, +0.3038247151441344, 0.0},
	                 {+1.2124160398001109, -0.3038247151441344, 0.0},
	                 {+0.0000000000000000, +0.0000000000000000, 0.0}};

	accelerate(m, r, a, n);

	printvs(a, n);

	for(int i = 0; i < n; ++i) {
		if(a[i].x != aref[i].x) {
			fprintf(stderr, "a[%d].x does not match reference\n", i);
			return 1;
		}
		if(a[i].y != aref[i].y) {
			fprintf(stderr, "a[%d].y does not match reference\n", i);
			return 1;
		}
		if(a[i].z != aref[i].z) {
			fprintf(stderr, "a[%d].z does not match reference\n", i);
			return 1;
		}
	}

	return 0;
}
