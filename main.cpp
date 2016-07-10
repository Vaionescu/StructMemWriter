#include <iostream>
#include <fstream>
#include <bitset>
using namespace std;
struct test{
	int a,b,c,d,f;
	char ac[20];
	long long agg;
	char hg;
	short shrt;
} var1;
int main()
{
	ofstream ofs;
	ofs.open("data.txt",ofstream::out|ofstream::app);
	var1.a=1;
	var1.b=2;
	var1.a=3;
	var1.a=4;
	var1.b=5;
	var1.ac[4]='s';
	var1.agg=25474829180;
	var1.hg='j';
	var1.shrt=567;
	void* c=&var1;
	for (int i=0;i<sizeof(var1);i++,c++){
		char nb=*((char*)c);
		bitset<8> A(nb);
		ofs<<A<<endl;
	}
	ofs.close();
    return 0;
}
