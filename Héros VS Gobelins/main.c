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
                break;
            case 2 :
                printf("Vous récupérez 15 PV.\n");
                herosPV += 15;
                
                if (herosPV > 50)
                {
                    herosPV = 50;
                }
               
                break;
            case 3 :
                printf("Vous ne faites rien.\n");
                break;
            default:
                printf("Action invalide, vous perdez votre tour !\n");
                break;
        }
        
        // L'attaque du gobelin (seulement s'il est encore en vie !)
        
        if (gobelinPV > 0)
        {
                printf("Le Gobelin vous attaque et inflige 8 degats !\n");
                herosPV -= 8;
        }
        
        if (herosPV < 0)
        {
            herosPV = 0;
        }
        
        if (gobelinPV < 0)
        {
            gobelinPV = 0;
        }
        
                // Affichage des stats à la fin du tour
                printf("\n=> Vous avez %d PV.\n", herosPV);
                printf("=> Le Gobelin a %d PV.\n", gobelinPV);
    }
    
    if (herosPV <= 0)
    {
        printf("\nVous avez perdu..\n"
               "\n=== FIN ===");
    }
    else if (gobelinPV <= 0)
    {  printf("\nVous avez gagné !\n"
              "\n=== FIN ===");
    }
    
    return 0;
}
