#include <iostream>
#include <cstdlib>
#include <utility>
#include <time.h>
#include <string.h>
#include <stdio.h>

int string_to_number(const char* str)
{
	int temp[10000];
	int i = 0, i2 = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp[i2] = str[i] - 48;
			i2++;
		}
		i++;
	}
	int res = temp[0];
	for (int i3 = 1; i3 < i2; i3++)
	{
		res = res * 10 + temp[i3];
	}
	return res;
}

int number_to_string(char* str, int num)
{
	int c = 0, n = num;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	for (int i = c - 1, i2 = 1; i >= 0; i--)
	{
		str[i] = num / i2 % 10;
		i2 *= 10;
	}
	str[c] = '\0';
	int q = 0;
	while (str[q] != '\0')
	{
		str[q] += 48;
		q++;
	}
	return 0;
}
void upper_case(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		str[i] -= 32;
		i++;
	}
}

void lower_case(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		str[i] += 32;
		i++;
	}
}

void c_v(char s[], char n[], int* count)
{
	int p = 0, i2 = 0;
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] == n[i2])
		{
			p++;
			i2++;
		}
		if (p == strlen(n))
		{
			(*count)++;
			p = 0;
			i2 = 0;
		}
	}
}


int c_w(char* str)
{
	int i = 1, count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.')
		{
			count++;
		}
		i++;
	}
	return count;
}

int c_dz(char* str)
{
	int i = 1, count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == ',')
		{
			count++;
		}
		i++;
	}
	return count;
}

void p_t(char* str)
{
	char temp[10000], temp2[10000], temp3[10000];
	int i = 0, i2 = 0, i4 = 0;
	for (int f = strlen(str) - 1; f >= 0; f--)
	{
		if (str[f] != ' ')
		{
			temp[i2] = str[f];
			i2++;
		}
		if (str[f] == ' ' || f==0)
		{
			int i3 = 0;
			for (; i2 > 0; i2--)
			{
				temp2[i3] = temp[i2 - 1];
				i3++;
			}
			i2 = 0;
			for (; i2 < i3; i2++)
			{
				temp3[i4] = temp2[i2];
				i4++;
			}
			temp3[i4] = ' ';
			i4++;
			i2 = 0;
		}
		i++;
	}
	temp3[i4] = '\0';
	int q = 0;
	while (str[q] != '\0')
	{
		str[q] = temp3[q];
		q++;
	}
	//str = temp3;
}

/*
void p_p(char* str)
{
	char temp[10000], temp2[10000], temp3[10000];
	int i = 0, i2 = 0, i4 = 0;
	for (int f = strlen(str) - 1; f >= 0; f--)
	{
		if (str[f] != '.' && f<strlen(str))
		{
			temp[i2] = str[f];
			i2++;
		}
		if (str[f] == '.' && f<strlen(str) || f == 0 && f<strlen(str))
		{
			

			int i3 = 0;
			for (; i2 > 0; i2--)
			{
				temp2[i3] = temp[i2 - 1];
				i3++;
			}
			i2 = 0;
			//temp2[i3] = '.';
			//temp2[i3 + 1] = ' ';
			for (; i2 < i3; i2++)
			{
				temp3[i4] = temp2[i2];
				i4++;
			}
			if (f < strlen(str))
			{
				temp3[i4] = '.';
				temp3[i4 + 1] = ' ';
				i4 += 2;
			}
			i2 = 0;
		}
		i++;
	}
	temp3[i4] = '\0';
	int q = 0;
	while (str[q] != '\0')
	{
		str[q] = temp3[q];
		q++;
	}
}
*/

void p_p(char* str)
{
	char temp[10][500] = { { '\\' } };
	int i = 0, i2 = 0, i3 = 0;
	while (i < strlen(str))
	{
		if (str[i] != '.')
		{
			temp[i2][i3] = str[i];
			i3++;
		}
		else
		{
			temp[i2][i3] = '.';
			i3++;
			temp[i2][i3] = ' ';
			i2++;
			i3 = 0;
			i++;
		}
		i++;
	}
	i = 0;
	i2--;
	while (i2 >= 0)
	{
		i3 = 0;
		while (temp[i2][i3] != '.' && temp[i2][i3] != '\0')
		{
			str[i] = temp[i2][i3];
			i++;
			i3++;
		}
		str[i] = '.';
		i++;
		str[i] = ' ';
		i++;
		i2--;
		i3 = 0;
	}
	str[i] = '\0';
}


int main()
{
	setlocale(0, "");
	const char* s = "1WwCcq2we3e";
	char s1[10000], s2[10000] = { 'q','w','e','r','t','y','\0' };
	int n = 123;
	int i = 0;
	int count = 0;
	char s3[10000];
	char s4[10000];
	std::cout << string_to_number(s) <<'\n';
	number_to_string(s1, n);
	std::cout << s1 <<'\n';
	upper_case(s2);
	std::cout << s2 <<'\n';
	lower_case(s2);
	std::cout << s2 << '\n';
	gets_s(s3,10000);
	gets_s(s4,10000);
	c_v(s3, s4, &count);
	std::cout << count << '\n';
	gets_s(s3, 10000);
	std::cout << c_w(s3) << '\n';
	std::cout << c_dz(s3) << '\n';
	gets_s(s3, 10000);
	p_t(s3);
	std::cout << s3 << '\n';
	gets_s(s3, 10000);
	p_p(s3);
	std::cout << s3 << '\n';
	system("pause");
	return 0;
}