#include "../src/a1.h"
#include <stdio.h>
#include <math.h>

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
	int    n  = 3;
	scalar dt = 0.01;

	scalar m[] = {1, 1, 1};
	vector r[] = {{+0.9700436,   -0.24308753, 0},
	              {-0.9700436,   +0.24308753, 0},
	              {0, 0, 0}};
	vector v[] = {{+0.466203685, +0.43236573, 0},
	              {+0.466203685, +0.43236573, 0},
	              {-0.93240737,  -0.86473146, 0}};
	vector a[] = {{-1.2124160398001109, +0.3038247151441344, 0.0},
	              {+1.2124160398001109, -0.3038247151441344, 0.0},
	              {+0.0000000000000000, +0.0000000000000000, 0.0}};

	vector vref[] = {{+0.4541611895223864, +0.4353036783964382, 0.0},
	                 {+0.4784092495154159, +0.4292221031680538, 0.0},
	                 {-0.9325704390378023, -0.8645257815644920, 0.0}};

	leapfrog(m, r, v, a, n, dt);

	printvs(v, n);

	for(int i = 0; i < n; ++i) {
		if(fabs(v[i].x - vref[i].x) > 1e-6) {
			fprintf(stderr, "v[%d].x does not match reference\n", i);
			return 1;
		}
		if(fabs(v[i].y - vref[i].y) > 1e-6) {
			fprintf(stderr, "v[%d].y does not match reference\n", i);
			return 1;
		}
		if(fabs(v[i].z - vref[i].z) > 1e-6) {
			fprintf(stderr, "v[%d].z does not match reference\n", i);
			return 1;
		}
	}

	return 0;
}
