#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

double strToDbl(std::string &str, std::string const sub = ".")
{
    return stod(
        str.replace(
            str.find_first_of(','), 1, sub
        )
    );
}


template <class T>
void split(const std::string &str, T &cont, char delim = ';')
{
    size_t curr = 0;
    size_t next = str.find(delim, curr);
    while (next != std::string::npos)
    {
        cont.push_back(str.substr(curr, next - curr));
        curr = next + 1;
        next = str.find(delim, curr);
    }
    cont.push_back(str.substr(curr, str.length() - curr));
}


int main()
{
    std::string LON = "3,879483";
    double dLON = strToDbl(LON);

    // string LON;
    // cin >> LON;
    // cin.ignore();
    // cerr << LON << endl;

    std::string LAT = "3,879483";
    double dLAT = strToDbl(LAT);
    // string LAT;
    // cin >> LAT;
    // cin.ignore();
    // cerr << LAT << endl;

    int N;
    // cin >> N;
    // cin.ignore();

    // std::vector<std::string> defibs {
    //     "1;Maison de la Prevention Sante;6 rue Maguelone 340000 Montpellier;;3,87952263361082;43,6071285339217",
    //     "2;Hotel de Ville;1 place Georges Freche 34267 Montpellier;;3,89652239197876;43,5987299452849",
    //     "3;Zoo de Lunaret;50 avenue Agropolis 34090 Mtp;;3,87388031141133;43,6395872778854"
    // };

    std::string defib = "1;Maison de la Prevention Sante;6 rue Maguelone 340000 Montpellier;;3,87952263361082;43,6071285339217";
 
    std::vector<std::string> strSplit;
    split(defib, strSplit);


    // for (int i = 0; i < N; i++)
    // {
    //     string DEFIB;
    //     getline(cin, DEFIB);
    //     cerr << DEFIB << endl;
    // }

    // // Write an answer using cout. DON'T FORGET THE "<< endl"
    // // To debug: cerr << "Debug messages..." << endl;

    // cout << "answer" << endl;
    return 0;
}