#include "../src/a1.h"

int
main()
{
	scalar m = 0.5;
	vector r;

	r.x = 1.5;
	r.y = 2.5;
	r.z = 3.5;

	if(r.x == 1.5 && r.y == 2.5 && r.z == 3.5)
		return 0;
	else
		return 1;
}
