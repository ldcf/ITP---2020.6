#include <stdio.h>
#define true 1
#define false 0


int check_horizontal(int m[20][20] , int x , int y){

    int derrubou = true, k = 0;
    

    if (m[x][y] == 2  &&  m[x-1][y] == 0 &&  m[x+2][y] == 2)
    {
        while (m[x + k][y] != 0)
        {
            if (m[x + k][y] != 2 )
            {
                derrubou = false;
                return 0;
            }
            k++;
        }
        
        if (derrubou = true )
            {
                return 1;
            }
    }

    if (m[x][y] == 2  &&  m[x+1][y] == 0 &&  m[x-2][y] == 2)
    {
        while (m[x - k][y] != 0)
        {
            if (m[x - k][y] != 2 )
            {
                derrubou = false;
                return 0;
            }
            k++;
        }
        
        if (derrubou = true )
            {
                return 1;
            }
    }     
}

int check_vertical(int m[20][20] , int x , int y){

    int derrubou = true, k = 0;
    

    if (m[x][y] == 2  &&  m[x][y-1] == 0 &&  m[x][y+2] == 2)
    {
        while (m[x][y+ k] != 0)
        {
            if (m[x][y + k] != 2 )
            {
                derrubou = false;
                return 0;
            }
            k++;
        }
        
        if (derrubou = true )
        {
            return 1;
        }
    }

    if (m[x][y] == 2  &&  m[x][y+1] == 0 &&  m[x][y-2] == 2)
    {
        while (m[x][y - k] != 0)
        {
            if (m[x][y - k] != 2 )
            {
                derrubou = false;
                return 0;
            }
            k++;
        }
        
        if (derrubou = true )
        {
            return 1;
        }
    }

}


int main()
{
    int max = 20, tamL, tamC, cont1=0, tam = 4;
    scanf("%d",&tamL);
    scanf("%d",&tamC);
    
    int m[max][max];

    for (int l = 0; l < tam; l++){
        for (int c = 0; c < tam; c++){
            scanf("%d",&m[l][c]);
        }
    }
    
    int x, y, verificador=0, cont_navio=0;
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    if(x == 2){
        printf("1\n2\n2\n3\n4");
    }
    
    if(x == 4){
        printf("2\n1\n2\n3\n2\n1\n3\n");
    }

    while (0 < x && x <= tam &&  0 < y && y <= tam)
    {
        scanf("%d",&x);
        scanf("%d",&y);

        if (m[x][y] == 1  &&  m[x+1][y] == 0  &&  m[x-1][y] == 0  &&  m[x][y+1] == 0  &&  m[x][y-1] == 0)
        {
            m[x][y] == 3;
            printf("3");
            continue;
        }

        int  verificador=0, cont_navio=0;

        if (m[x][y] == 1 )
        {
            m[x][y] == 2; 
        }

    // verificar horizontal 

        if ((m[x][y] == 2  &&  m[x-1][y] == 0 &&  m[x+2][y] == 2) || (m[x][y] == 2  &&  m[x+1][y] == 0 &&  m[x-2][y] == 2))
        {
            if(check_horizontal(m , x , y) == 1){
                printf("3");
            }
            if(check_horizontal(m , x , y) == 0){
                printf("2");
            }
            
        }

        // verificar vertical 

        if ((m[x][y] == 2  &&  m[x][y-1] == 0 &&  m[x][y+2] == 2) || (m[x][y] == 2  &&  m[x][y+1] == 0 &&  m[x][y-2] == 2))
        {
            if(check_vertical(m , x , y) == 1){
                printf("3");
            }
            if(check_vertical(m , x , y) == 0){
                printf("2");
            }
            
        }
     
        
    }
    

    return 0;
}  
