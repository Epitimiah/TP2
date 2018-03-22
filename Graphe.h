#ifndef GRAPHE
#define GRAPHE
#include "Arete.h"

public class Graphe{
public :
    vector<vector<int>> ma;
    int ordre;
    vector<Sommets> arbre;

    public Graphe(vector<Sommets> a , int o);
    public Graphe();

    public void Allocate(int o);
    public ReadFile(string f);

    public void Afficher();

    public ~Graphe();
}

#endif
