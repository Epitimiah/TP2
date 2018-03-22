#include "Graphe.h"
using namespace std;

public class Graphe{
public :
    vector<vector<int>> ma;
    int ordre;
    vector<Sommets> arbre;

    public Graphe(vector<Sommets> a , int o)
    {
        ordre = o;
        arbre = a;
    }

    public Graphe()
    {
    }

    public void Allocate(int o)
    {
        ma = new vector<vector<>>();
        tmp = new vector<int>();
        ordre = o;
        arbre = new vector<>();


        for(int j = 0; j< ordre; j++)
        {
            tmp.push_back(0);
            arbre.push_back(new Sommet());
        }
        for(int j = 0; j< ordre; j++)
        {
            ma.push_back(tmp);
        }
    }

    public void ReadFile(string f)
    {
        if(f == "")
        {
            f = "adj.txt";
        }
        string s = "";

        ifstream m(f.c_str());

        if(m)
        {
            getline(m, s);
            ordre = atoi(s.c_str());

            for(int i = 0; i< ordre; i++)
            {
                getline(m, s);
                for(int j = 0; j< ordre; j++)
                {
                     ma[i][j] = s[i]-48;
                }
            }
        }
        else
        {
            cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
        }
    }

    public void Afficher()
    {
        string s;
        for(int i = 0; i < ordre; i++)
        {
            for(int j = 0; j< ordre; j++)
            {
                if(ma[i][j])
                {
                    switch(i)
                    {
                    case 1 :
                        s += "Emmanuel M";
                        break;
                    case 2:
                        s += "Manuel V";
                        break;
                    case 3:
                        s += "Francois B";
                        break;
                    case 4:
                        s += "Alain J";
                        break;
                    case 5:
                        s += "Marine L";
                        break;
                    case 6:
                        s += "Christine T";
                        break;
                    }

                    s += " influence "

                    switch(j)
                    {
                    case 1 :
                        s += "Emmanuel M";
                        break;
                    case 2:
                        s += "Manuel V";
                        break;
                    case 3:
                        s += "Francois B";
                        break;
                    case 4:
                        s += "Alain J";
                        break;
                    case 5:
                        s += "Marine L";
                        break;
                    case 6:
                        s += "Christine T";
                        break;
                    }
                    cout << s + "\n";
                    s = "";
                }
            }
        }
    }

    public ~Graphe()
    {

    }
}
