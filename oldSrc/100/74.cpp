#include<stdio.h>

#include<math.h>

main()

{
	int weight1, weight2, weight3, weight4, d1, d2, d3, d4, x, flag;     /*flag:��
 ������ı��*/

	printf("The weight is broke up as following 4 pieces:");

	for (weight1 = 1; weight1 <= 40; weight1++)         /*��40�ֽ��4��*/

		for (weight2 = weight1 + 1; weight2 <= 40 - weight1; weight2++)

			for (weight3 = weight2 + 1; weight3 <= 40 - weight1 - weight2; weight3++)

				if ((weight4 = 40 - weight1 - weight2 - weight3) >= weight3)

				{
					for (flag = 1, x = 1; x < 41 && flag; x++)     /*�жϿɷ�Ƴ�1~40֮
   ���ȫ������*/

						for (flag = 0, d1 = 1; d1 > -2; d1--)     /*�����������ƽ����
   ��*/

							for (d2 = 1; d2 > -2 && !flag; d2--)   /*1:��������ƽ�ұ�
	*/

								for (d3 = 1; d3 > -2 && !flag; d3--)    /*0�����ø�����
	 */

									for (d4 = 1; d4 > -2 && !flag; d4--)    /*-1:��������ƽ
		 �����*/

										if (x == weight1 * d1 + weight2 * d2 + weight3 * d3 + weight4 * d4)

											flag = 1;

					if (flag) printf("%d %d %d %d\n", weight1, weight2, weight3, weight4);

					flag = 0;
				}
}