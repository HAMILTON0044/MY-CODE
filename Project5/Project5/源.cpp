#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	if (1)
//		printf("hehe");
//	return 0;
//}

//int main()
//{
//	while (1)
//		printf("hehe");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		
//	}
//    return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	putchar(ch);
//	return 0;
//}

int main()
{
	int ret = 0;
	int ch = 0;
	char password[20] = { 0 };
	printf("«Î ‰»Î√‹¬Î£∫>");
	scanf("%s", password);
	while ((ch = getchar()) != '\n')
		getchar();
	printf("«Î»∑»œ£®Y/N£©");
	ret = getchar();
	if (ret == 'Y')
		printf("OK");
	else
		printf("KO");
	return 0;
}