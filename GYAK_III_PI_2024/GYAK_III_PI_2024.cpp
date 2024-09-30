#include <iostream>
using namespace std;

int main()
{
    /*int jegy;
    cout << "Adja meg a matamatika jegyet: ";
    cin >> jegy;

    if (jegy == 1) cout << "Elegtelen." << endl;
    else
        if (jegy == 2) cout << "Elegseges." << endl;
        else
            if (jegy == 3) cout << "Kozepes." << endl;
            else
                if (jegy == 4) cout << "Jó." << endl;
                else
                    if (jegy == 5) cout << "Jeles." << endl;
                    else cout << "Nem megfelelo erteket adott meg." << endl;
*/
//2.feladat

//int jegy;
//cout << "Adja meg a matamatika jegyet: ";
//cin >> jegy;

//switch (jegy)
//{
//case 1: cout << "Elegtelen"; break;
//case 2: cout << "Elegseges"; break;
//case 3: cout << "Kozepes"; break;
//case 4: cout << "Jo"; break;
//case 5: cout << "Jeles"; break;
//default:
//    cout << "Nem jo ertek!";
//    break;
//}

//3.feladat
/*int n, osszeg = 0;
cout << "Meddig adjam ossze a szamokat? Madd meg a szamot: ";
cin >> n;
while (n > 0)
{
    osszeg = osszeg + n;
    n--;
}
cout << "A szamok osszege 1-tol a megadott erteking "
    << osszeg << endl;*/

    //4.feladat
/*   int n, osszeg = 0;
   cout << "Meddig adjam ossze a szamokat? Madd meg a szamot: ";
   cin >> n;
  do
   {
       osszeg = osszeg + n;
       n--;
  } while (n > 0);
   cout << "A szamok osszege 1-tol a megadott erteking "
       << osszeg << endl;*/

       //5.feladat
       /*int pont;
       do {
           cout << "Adjon meg egy pontszamot 0 es 100 kozott"  << endl;
           cin >> pont;
       } while (pont > 100 || pont < 0);
       if (pont < 51) cout << "Megbukott" << endl;
       else cout << "Megfelelt" << endl;*/

       //6.feladat
    int tmb[8] = { 1,2,2,2,3,2,2,1 };
    char vmi[8] = { 'a','b', 'c', 'd', 'e', 'f', 'g', 'h' };
    cout << "Az elso tomb elemei? \n";
    for (int i = 0; i < 8; i++)
    {
        cout << tmb[i] << ", ";
    }
    cout << endl;
    cout << "Az masodi tomb elemei? \n";
    for (int i = 0; i < 8; i++)
    {
        cout << vmi[i] << ", ";
    }
    cout << endl;
    system("pause");



    return 0;
}
