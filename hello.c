#include <stdio.h>
#include <string.h>
#include <time.h>

int main(int argc, char *argv[])
{
	FILE *fo;
	char nowTime[256] = {'\0'};
    time_t timer;
    struct tm *timeptr;
	
	if (argc < 2) {
		printf("Error: 引数の指定が誤っています。\n");
		return -1;
	}
	timer = time(NULL);
    timeptr = localtime(&timer);
    strftime(nowTime, 256, "[%Y/%m/%d %H:%M:%S]", timeptr);
	
	fo = fopen(argv[1], "a");
	if (fo == NULL) {
		printf("Error: ファイルオープンに失敗　file[%s]\n", argv[1]);
		return -2;
	}
	
	fprintf(fo, "%s Good Morning!!\n", nowTime);
	
	fclose(fo);
	
	return 0;
}

