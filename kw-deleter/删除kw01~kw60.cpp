#include<string>
#include<windows.h>
using namespace std;
char buf[100];
int main()
{
	for(int i=1;i<=60;i++){
		sprintf(buf,"net user kw%c%c /delete",i/10+'0',i%10+'0');
		system(buf);
	}
	return 0;
}
