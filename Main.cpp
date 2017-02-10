#include "Stu.h"
using namespace std;


int main(int argc, char* argv[])
{
     IStu *p = NULL;
     CreateStuApp(&p);
     p->Run();

	return 0;
}