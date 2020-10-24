#include <stdio.h>
#define true 1
#define false 0

int gomoku(int m_Gomk[15][15])
{
    for (int l = 0; l < 15; l++)
    {
        for (int c = 0; c < 15; c++)
        {
            if((m_Gomk[l][c] == 1 && m_Gomk[l+1][c] == 1 && m_Gomk[l+2][c] == 1 && m_Gomk[l+3][c] == 1 && m_Gomk[l+4][c] == 1) ||
               (m_Gomk[l][c] == 1 && m_Gomk[l][c+1] == 1 && m_Gomk[l][c+2] == 1 && m_Gomk[l][c+3] == 1 && m_Gomk[l][c+4] == 1) ||
               (m_Gomk[l][c] == 1 && m_Gomk[l+1][c+1] == 1 && m_Gomk[l+2][c+2] == 1 && m_Gomk[l+3][c+3] == 1 && m_Gomk[l+4][c+4] == 1) ||
               (m_Gomk[l][c] == 1 && m_Gomk[l+1][c-1] == 1 && m_Gomk[l+2][c-2] == 1 && m_Gomk[l+3][c]-3 == 1 && m_Gomk[l+4][c-4] == 1))
            {
                printf("1");
                return 1;
            }
            if((m_Gomk[l][c] == 2 && m_Gomk[l+1][c] == 2 && m_Gomk[l+2][c] == 2 && m_Gomk[l+3][c] == 2 && m_Gomk[l+4][c] == 2) ||
               (m_Gomk[l][c] == 2 && m_Gomk[l][c+1] == 2 && m_Gomk[l][c+2] == 2 && m_Gomk[l][c+3] == 2 && m_Gomk[l][c+4] == 2) ||
               (m_Gomk[l][c] == 2 && m_Gomk[l+1][c+1] == 2 && m_Gomk[l+2][c+2] == 2 && m_Gomk[l+3][c+3] == 2 && m_Gomk[l+4][c+4] == 2) ||
               (m_Gomk[l][c] == 2 && m_Gomk[l+1][c-1] == 2 && m_Gomk[l+2][c-2] == 2 && m_Gomk[l+3][c]-3 == 2 && m_Gomk[l+4][c-4] == 2))
            {
                printf("2");
                return 2;
            }
        }
    }
    printf("0");
    return 0;
}

int main()
{

    int  m_Entrada[15][15];
    
    for (int l = 0; l < 15; l++)
    {
        for (int c = 0; c < 15; c++)
        {
            scanf("%d", &m_Entrada[l][c]);    
        }
    }

    gomoku(m_Entrada);

    return 0;
}



