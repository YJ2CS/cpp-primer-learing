#include<stdio.h>

#define NUM 5              /*��Ҫ��ٵı�����Ŀ*/

#define C_NUM 4            /*ÿ��������ֵ�ı仯��Χ*/

int a[NUM + 1];              /*Ϊ��Ҫ��ٵı������ٵ�����*/

		  /*a[1]:�������İ�λ��a[2]��ʮλ,aa[3]:��λ a[4]:��������ʮλ
a[5]:��λ*/

int b[] = { 0,2,3,5,7 };          /*����������ֵ����飬��ʹ�õ�0��Ԫ��*/

int f(long sum);

main()

{
	int i, not_finish = 1;

	i = 2;                /*i:��Ҫ���д�����Ԫ�ص�ָ���±ꡣ���ó�ʼֵ*/

	a[1] = 1;             /*Ϊ��1��Ԫ�����ó�ʼֵ*/

	while (not_finish)     /*not_finish:��������û�������*/

	{
		while (not_finish && i <= NUM)

			/*����������i��Ԫ�����ڵĺ���Ԫ�أ��ҳ���ǰ�����µ�һ�ָ�������
   ��һ�ֿ��ܵ�ȡֵ����*/

			if (a[i] >= C_NUM)     /*��Ҫ������Ԫ��ȡ�����涨��C_NUMʱ*/

				if (i == 1 && a[1] == C_NUM)

					not_finish = 0;          /*��1��Ԫ���Ѿ���C_NUM������ȫ������*/

				else a[i--] = 0;           /*��Ҫ������Ԫ����0���±�-1(����һ��Ԫ��)*/

			else a[i++]++;             /*��ǰԪ��ֵ��1���±�ָ���1*/

		if (not_finish)

		{
			long int sum1, sum2, sum3, sum4;          /*������ʱ����*/

			sum1 = b[a[1]] * 100 + b[a[2]] * 10 + b[a[3]];   /*���㱻����*/

							  /*����������±��������Ķ�Ӧ��ϵ������1��4��������ת��*/

			sum2 = sum1 * b[a[5]];        /*���������λ�뱻�����Ĳ��ֻ�*/

			sum3 = sum1 * b[a[4]];        /*�������ʮλ�뱻�����Ĳ��ֻ�*/

			if (sum2 >= 2222 && sum2 <= 7777 && f(sum2) && sum3 >= 2222 && sum3 <= 7777 && f(sum3))

				/*�ж������ֻ��Ƿ�������Ŀ����*/

				if ((sum4 = sum2 + sum3 * 10) >= 22222 && sum4 <= 77777 && f(sum4))

					/*�жϳ�ʽ�Ļ��Ƿ�������Ŀ����*/

				{
					printf("  %d\n", sum1);          /*���������⣬���ӡ���*/

					printf("* %d%d\n", b[a[4]], b[a[5]]);

					printf("........................\n");

					printf(" %d\n", sum2);

					printf(" %d\n", sum3);

					printf("........................\n");

					printf(" %d\n", sum4);
				}

			i = NUM;                      /*Ϊ�����һ������ȡֵ��׼��*/
		}
	}
}

int f(long sum)           /*�ж�sum��ÿһλ�����Ƿ��������������Ƿ���0�����Ƿ���1*/

{
	int i, k, flag;        /*flag=1:�����������ı��*/

	while (sum > 0)

	{
		i = sum % 10;         /*ȡ��λ������*/

		for (flag = 0, k = 1; !flag && k <= C_NUM; k++)

			if (b[k] == i)

			{
				flag = 1; break;
			}

		if (!flag) return 0;

		else sum = sum / 10;
	}

	return 1;
}