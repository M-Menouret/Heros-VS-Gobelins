#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[])
{
    int herosPV = 50;
    int gobelinPV = 50;
    int action = 0;
    
    printf("=== HEROS VS GOBELINS ===\n"
           "\nHeros - 50PV\n"
           "Gobelin - 50PV\n"
           "\nLe combat va commencer !!\n"
           "3..\n"
           "2..\n"
           "1..\n"
           "\nCommencez !!\n");
    
    while (herosPV > 0 && gobelinPV > 0)
    {
        printf("\nQue voulez vous faire ?\n"
            "1 - Attaquer\n"
            "2 - Se soigner\n"
            "3 - Ne rien faire\n");
        scanf("%d", &action);
        
        switch(action)
        {   case 1 :
                printf("Vous attaquez !\n");
                gobelinPV -= 12;
                printf("Le Gobelin attaque !\n");
                herosPV -= 8;
                printf("\nVous avez %d pv.\n", herosPV);
                printf("Le Gobelin a %d pv.\n", gobelinPV);
                break;
            case 2 :
                printf("Vous récupérez 15 PV.\n");
                herosPV += 15;
                printf("Le Gobelin attaque !\n");
                herosPV -= 8;
                printf("\nVous avez %d pv.\n", herosPV);
                printf("Le Gobelin a %d pv.\n", gobelinPV);
                break;
            case 3 :
                printf("Vous ne faites rien.\n");
                printf("Le Gobelin attaque !\n");
                herosPV -= 8;
                printf("\nVous avez %d pv.\n", herosPV);
                printf("Le Gobelin a %d pv.\n", gobelinPV);
                break;
        }
    }
    
    if (herosPV <= 0)
    {
        printf("Vous avez perdu..\n"
               "\n=== FIN ===");
    }
    else if (gobelinPV <= 0)
    {  printf("Vous avez gagné !\n"
              "\n=== FIN ===");
    }
    
    return 0;
}
