#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *Data, int n);

int main(void)
{
    int i, n;
    int Data[10];        // maximum Data amount = 10
    int MaxNum,MinNum;
    printf("�п�J��Ƶ��� n(<= 10): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("�п�J�� %d �����: ", i + 1);
        scanf("%d", &Data[i]);
    }
	MaxNum = Data[0];    // define and ensure max and mini number is countable integer
	MinNum = Data[0];    // as above
	    
    for(i=0;i<n;i++)
	{
		if(MinNum>Data[i])
		MinNum=Data[i];
		if(MaxNum<Data[i])
		MaxNum=Data[i];
	}
    // �����w�Ƨ�
    BubbleSort(Data, n);


    printf("\n�Ƨǫ᪺���G: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", Data[i]);
    }
    printf("�̤j��=%d , �̤p��=%d \n",MaxNum,MinNum);

    printf("\n");
    system("pause");
}

void BubbleSort(int *Data, int n)              //sorting from minimum to maximum
{
    int i, j, temp;
    for (i = n - 1; i > 0; i--)
    {
        for (j = 0; j <= i - 1; j++)
        {
            if (Data[j] > Data[j + 1])
            {
                temp = Data[j];
                Data[j] = Data[j + 1];
                Data[j + 1] = temp;
            }
        }
    }
}
