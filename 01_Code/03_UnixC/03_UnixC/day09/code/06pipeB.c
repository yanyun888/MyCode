//使用管道进行进程间的通信
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	//1.打开文件
	int fd = open("a.pipe",O_RDONLY);
	if(-1 == fd)
	{
		perror("open"),exit(-1);
	}
	//2.读取管道文件的内容
	int i = 0;
	for(i = 0; i < 100; i++)
	{
		int x = 0;
		read(fd,&x,sizeof(int));
		printf("x = %d\n",x);
	}
	//4.关闭文件
	close(fd);
	return 0;
}
