// Random_Numbers.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <ctime>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
//#pragma warning(disable:4996)//忽略C4996错误

//将string转为int
int get_int(void);
//获取有效字符
std::string get_numstr(void);

int main(int argc, char* argv[])
{
	unsigned t = 0;
	long long int min = 0, max = 0, n = 0, start_time, end_time;
flag:
	//重新为变量赋初值
	{min = max = n = 0; start_time = unsigned(time(0)); t = unsigned(start_time); };

	std::cout << "开始时间为\n" << start_time << std::endl;
	std::cout << "随机数种子为\n" << t << std::endl;;
	srand(t);

	std::cout << "请输入最小值" << std::endl;
	min = get_int();
	std::cout << "最小值为" << min << std::endl;

	std::cout << "请输入最大值" << std::endl;
	max = get_int();
	std::cout << "最大值为" << max << std::endl;
	//比较最大值和最小值
	if ((max - min) <= 0)
	{
		std::cout << "请注意,先输入最小值,在输入最大值" << std::endl;;
		system("pause");
		//跳转回
		goto flag;
	}
	std::cout << "请输入循环次数:\t" << std::endl;
	n = get_int();
	std::cout << "循环次数为" << n << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << "第" << i + 1 << "次输出\t\t\t" << ((rand() % (max - min + 1)) + min) << std::endl;;
	}
	end_time = time(0);
	std::cout << "结束时间为" << end_time << std::endl;
	std::cout << "时间差为" << end_time - start_time << std::endl;
	std::cout << "输入任意键退出,输入y继续" << std::endl;
	char ch = '0';
	ch = _getch();//C4996错误
	if (ch == 'y' || ch == 'Y')
	{
		goto	flag;
	}
	else
	{
		return 0;
	}
	return 0;
}

//将string转为int
int get_int(void)
{
	std::string str;
	long long int i = 0;
	//变量b用于判断正负,变量zero用于判断第一位数字是否为零
	bool b = false;
	bool zero = false;
	std::cin >> str;
	for (long long int sz = 0; sz != str.size(); ++sz)
	{
		switch (str[sz])
		{
		case '1':i += 1;
			i *= 10;
			zero = true;
			break;
		case '2':i += 2;
			zero = true;
			i *= 10;
			break;
		case '3':i += 3;
			zero = true;
			i *= 10;
			break;
		case '4':i += 4;
			zero = true;
			i *= 10;
			break;
		case '5':i += 5;
			zero = true;
			i *= 10;
			break;
		case '6':i += 6;
			zero = true;
			i *= 10;
			break;
		case '7':i += 7;
			zero = true;
			i *= 10;
			break;
		case '8':i += 8;
			zero = true;
			i *= 10;
			break;
		case '9':i += 9;
			zero = true;
			i *= 10;
			break;
		case '0':i += 0;
			if (zero)
			{
				i *= 10;
			}
			break;
		case '-':
			b = 1;
			break;
		default:
			break;
		}
	}
	i /= 10;
	if (b)
	{
		i *= (-1);
	}
	return i;
}

