#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	int j = 0;
	int ch = 0;
	char user[20] = { 0 };
	char password[20] = { 0 };
	for (i = 0;i<100; i++)
	{
		printf("please enter user name:>\n");
		scanf("%s", user);
		printf("check user name....\n	");
		if (strcmp(user,"users") == 0)
		{
			printf("user name is ture");
			break;
		}
		else
		{
			printf("user name enter fail\n");
			printf("please enter user name again\n");
			while ((ch = getchar()) != '\n')                                 
			{
				;
			}
		}
	}
	for (j=0;j<3;j++)
	{
		printf("please enter password>: \n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("password input correct");
			printf("sign up success\n");
			break;
		}
		else
		{
			printf("password enter fail\n");
			printf("please enter password again\n");
		}
	}
	if (j == 3)
	{
		printf("sign up failed , exit now\n");
	}


	return 0;
}