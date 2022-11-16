
#include <stdio.h>
void sort(int s[], int f[], int n)
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (f[j] <= f[i])
			{
				int temp = f[j];
				f[j] = f[i];
				f[i] = temp;

				int temp1 = s[j];
				s[j] = s[i];
				s[i] = temp1;
			}
		}
    }
}
void printMaxActivities(int s[], int f[], int n)
{
	int i, j;
	printf("\n");
	printf("Activities selected are:\n");


	i = 0;
	printf("%d ", i);

	
	for (j = 1; j < n; j++)
	{
		// If this activity has start time greater than or
		// equal to the finish time of previously selected
		// activity, then select it
		if (s[j] >= f[i])
		{
			printf("%d ", j);
			i = j;
		}
	}
}


int main()
{
	int s[] = {1, 2, 3, 4, 7, 8, 9, 9, 11, 12};
	int f[] = {3, 5, 4, 7, 10, 9, 11, 13, 12, 14};

	int n = sizeof(s) / sizeof(s[0]);
	
	sort(s, f, n);
	for (int j = 0; j < n; j++)
	{
		printf("%d ", s[j]);
	}
	printf("\n");

	for (int j = 0; j < n; j++)
	{
		printf("%d ", f[j]);
	}

	printMaxActivities(s, f, n);
	return 0;
}