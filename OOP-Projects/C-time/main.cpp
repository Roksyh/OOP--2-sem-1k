#include "ctime.h"
int main() {
	CTime t1, t2(12,12,12), t3(t2);
	return 0;
}