#include<stdio.h>
main()

{
	int p, e, a, r;

	for (p = 1; p <= 9; p++)          /*��1��9�����ĸp��ȫ������ȡֵ*/

		for (e = 0; e <= 9; e++)      /*��0�������ĸe��ȫ������ȡֵ*/

			if (p != e)            /*p������e*/

				for (a = 1; a <= 9; a++)    /*��0��9�����ĸa��ȫ������ȡֵ*/

					if (a != p && a != e)

						for (r = 0; r <= 9; r++)    /*��0��9�����ĸr��ȫ������ȡֵ*/

							if (r != p && r != e && r != a && p * 1000 + e * 100 + a * 10 + r - (a * 100 + r * 10 + a)

								== p * 100 + e * 10 + a)

							{
								printf("   PEAR   %d%d%d%d\n", p, e, a, r);

								printf("  -ARA -   %d%d%d\n", a, r, a);

								printf(".........................\n");

								printf("   PEA   %d%d%d\n", p, e, a);
							}
}