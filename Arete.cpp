#include "Arete.h"
public class Arete{
public :
    string name;
    Sommets s, s1;

    public Arete(Sommets p, Sommets o,string n = "")
    {
        s = p;
        s1 = o;
        name = n;
    }

    public ~Arete()
    {

    }
}
