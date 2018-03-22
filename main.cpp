#include <iostream>
#include "Sommet.h"


using namespace std;

int main()
{
    Graphe g = new Graphe();
    cout << "entre un fichier : " ;
    g.Allocate(6);
    g.ReadFile(cin >> );
    g.Afficher();
    ~g;
    return 0;
}
