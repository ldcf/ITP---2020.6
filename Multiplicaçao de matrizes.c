#include <stdio.h>

int main()
{
    int maiorL_ou_C, temp, B, La, Ca, Lb, Cb, mA[20][20], mB[20][20], resultado[20][20];

    if(La > Cb){
        maiorL_ou_C = La;
    }
    if(Cb > La){
        maiorL_ou_C = Cb;
    }

    scanf("%d",&La);
    scanf("%d",&Ca);    

    for (int l = 0; l < La; l++)
    {
        for (int c = 0; c < Ca; c++)
        {
            scanf("%d", &mA[l][c]);    
        }
    }

    scanf("%d",&Lb);
    scanf("%d",&Cb);

    for (int l = 0; l < Lb; l++)
    {
        for (int c = 0; c < Cb; c++)
        {
            scanf("%d", &mB[l][c]);    
        }
    }

    for (int l = 0; l < La; l++)
    {
        
        for (int c = 0; c < Cb; c++)
        {
            temp = 0;
            for (int k = 0; k < 3; k++)
            {
                temp += (mA[l][k] * mB[k][c]);
            }
            resultado[l][c] = temp;
        }
    }

    for (int l = 0; l < La; l++)
    {
        for (int c = 0; c < Cb; c++)
        {
            printf("%d ", resultado[l][c]);    
        }
        printf("\n");
    }

    return 0;
}



