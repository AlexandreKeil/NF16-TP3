#include "tp3.h"

int main()
{
   /** Premier main de test
    t_ludotheque* l = creer_ludotheque();
     //affiche_ludotheque(l);
     t_jeu* j1 = creer_jeu("Times up", 3, 4, 8, 35);
     t_jeu* j2 = creer_jeu("Endor", 1, 3, 8, 90);
     ajouter_jeu(l, j2);
     ajouter_jeu(l, j1);
     //l->debut = j1;
     affiche_ludotheque(l);
     return 0;*/
    /** Deuxieme main de test
    t_ludotheque* l = creer_ludotheque();
    //affiche_ludotheque(l);
    t_jeu* j1 = creer_jeu("Times up", 3, 4, 8, 35);
    t_jeu* j2 = creer_jeu("Endor", 1, 3, 8, 90);
    t_jeu* j3 = creer_jeu("Monopoly", 1, 3, 8, 90);
    t_jeu* j4 = creer_jeu("times up", 3, 4, 8, 35);
    ajouter_jeu(l, j1);
    ajouter_jeu(l, j2);
    ajouter_jeu(l, j3);
    retirer_jeu(l, "Monopoly");


    //l->debut = j1;
    affiche_ludotheque(l);
    return 0;
    */
/*//Main du prof lors de la d�mo
    t_ludotheque* l = creer_ludotheque();
    t_ludotheque* l2 = creer_ludotheque();
    //affiche_ludotheque(l);
    t_jeu* j1 = creer_jeu("Times up", 3, 4, 8, 35);
    t_jeu* j2 = creer_jeu("Endor", 1, 3, 8, 90);
    t_jeu* j3 = creer_jeu("Endor2", 1, 3, 8, 90);
    t_jeu* j4 = creer_jeu("Times up2", 3, 4, 8, 35);
    t_jeu* j5 = creer_jeu("a", 3, 4, 8, 35);

    ajouter_jeu(l, j1);
    affiche_ludotheque(l);
    ajouter_jeu(l, j5);
    affiche_ludotheque(l);
    ajouter_jeu(l, j2);
    affiche_ludotheque(l);
    ajouter_jeu(l2, j3);
    affiche_ludotheque(l2);
    ajouter_jeu(l2, j4);
    affiche_ludotheque(l2);

    t_ludotheque* lfusion = fusion(l, l2) ;
    affiche_ludotheque(lfusion);

    supprimer_ludotheque(lfusion);
    affiche_ludotheque(lfusion);


/*
    t_ludotheque* l;  l = creer_ludotheque();
    t_ludotheque *l2; l2 = creer_ludotheque();
    t_ludotheque *l3; l3 = creer_ludotheque();
    t_ludotheque *l4; l4 = creer_ludotheque();
    t_ludotheque *l5; l5 = creer_ludotheque();

    ajouter_ludo(ludotheques, l);
    ajouter_ludo(ludotheques, l2);
    ajouter_ludo(ludotheques, l3);
    ajouter_ludo(ludotheques, l4);
    ajouter_ludo(ludotheques, l5);*/



/**BLOC A GARDER*/
    toutes_ludos *ludotheques = ensemble_ludos(); //initialisation des ludoth�que
    menu(ludotheques); //appel du menu qui g�re la suppression des ludotheques
    free(ludotheques);
    return 0;
}

