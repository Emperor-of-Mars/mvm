#include "main.h"

using namespace std;
using namespace mvm;

int main()
{
	fvec4 v1(1,2,3,4);
	fmat44 m1, m2, m3;
	m1.data[1] = 2;
	m1.data[2] = 2;
	m1.data[5] = 1;
	m1.data[7] = 2;
	m1.data[8] = 2;
	m1.data[11] = 2;
	m1.data[14] = 1;
	m2.data[0] = 2;
	m2.data[1] = 2;
	m2.data[5] = 2;
	m2.data[7] = 1;
	m2.data[13] = 2;
	m2.data[14] = 2;

	m3 = m1 * m2;
	m1.print();
	m2.print();
	m3.print();
    return 0;
}
