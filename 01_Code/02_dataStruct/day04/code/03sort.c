//4种排序算法的实现
#include <stdio.h>

//冒泡排序函数
void bubble(int arr[],int len)
{
	//使用循环控制比较的轮数
	int i = 0,j = 0;
	for(i = 0; i < len-1; i++) //len
	{
		//针对每一轮使用循环控制需要比较元素的下标
		for(j = 0; j < len-i-1; j++)//0~len-1
		{
			if(arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			} 
		}
	}
}
//插入排序
void insert(int arr[],int len)
{
	//从第二个元素起,单独保存起来，依次与左边的元素进行比较
	int i = 0,j = 0;
	for(i = 1; i < len; i++)
	{
		int temp = arr[i];
		//如果左边元素大于取出的元素,则左边元素右移,直到左边没有元素，或者左边元素小于取出元素，则将取出元素插入到左边元素之后
		for(j = i; arr[j-1] > temp && j >= 1; j--)
		{
			arr[j] = arr[j-1];
		}
		//避免自己给自己赋值
		if(i != j)
		{
			arr[j] = temp;
		}
	}
}

//选择排序算法
void choose(int arr[],int len)
{
	//从第一个数起，依次取出每个元素，并且假设取出元素为最小值，记录此元素的下标min
	int i = 0,j = 0;
	for(i = 0; i < len; i++)
	{
		int min = i;
		//让min记录的最小值与后续元素进行比较，如果找到比min记录的数还小的数，则重新记录下标
		for(j = i+1; j < len; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		//直到与后序所有元素比较完毕，让最开始假定的元素和min记录的元素进行交换
		//避免自己和自己交换
		if(min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

//快速排序算法
void quick(int arr[],int left,int right)
{
	//1.寻找中间元素作为基准值,单独保存
	int p = (left+right)/2;
	int pivot = arr[p];
	//2.分别用左边元素和右边元素与基准值进行比较，将比基准值小的放左边，大于等于的放右边
	int i = 0,j = 0;
	for(i = left,j = right; i < j; )
	{
		//3.先使用左边的元素与基准值进行比较，如果左边的元素小于基准值，则比较下一个
		while(i < p && arr[i] < pivot)
		{
			i++;
		}
		//4.如果左边元素大于基准值,则该元素赋值到p指向的位置,p指向该元素位置
		if(i < p)
		{
			arr[p] = arr[i];
			p = i;
		}
		//5.右边的元素方法同上
		while(j > p && arr[j] >= pivot)
		{
			j--;
		}
		if(j > p)
		{
			arr[p] = arr[j];
			p = j;
		}
	}
	//6.此时i和j和p重合，将基准值放到重合位置
	arr[p] = pivot;
	//7.分别对基准值左边的元素和右边的元素进行递归处理，重复以上过程
	if(p - left > 1)
	{
		quick(arr,left,p-1);
	}
	if(right - p > 1)
	{
		quick(arr,p+1,right);
	}
}

int main(void)
{
	int arr[9] = {30,15,45,8,20,10,33,18,5};
	//bubble(arr,9);
	//insert(arr,9);
	//choose(arr,9);
	quick(arr,0,8);
	int i = 0;
	printf("排序之后的结果是：");
	for(i = 0; i < 9; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}




