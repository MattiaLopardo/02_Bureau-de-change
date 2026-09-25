/* --------------------------- 
Laboratoire : 03
Auteur(s) : Mattia Lopardo
Date : 23.09.26
But : Bureau de change 
Remarque(s) : 
--------------------------- */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <windows.h>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numcompte = 0;
    string nom;
    double sommeEuro = 0.0; //Somme en Euro que l'on veut retirer
    double soldecompte = 1000.0;
    double tauxchange = 1.024; //De Francs à Euro
    double frais = 5.0; //Frais de transaction

    SetConsoleOutputCP(CP_UTF8); // Permet d'afficher des lettres accentuées

    cout << "Quel est votre numéro de compte ?" << endl;
    cin >> numcompte;
    cout << "Quel est votre nom de famille ?" << endl;
    cin >> nom;

    cout << "Solde de votre compte CHF : " << soldecompte << endl;
    cout << "Taux de change : 1 CHF = " << tauxchange << " Euro" << endl;
    cout << "Frais d'opération : " << frais << " CHF" << endl;

    cout << "Entrez la somme souhaitée en Euro :" << endl;
    cin >> sommeEuro;

    double sommeFrancs = sommeEuro/tauxchange; //Fait la conversion d'euro à francs
    double restcompte = soldecompte - sommeFrancs - frais; //Soustrait la somme retirée au solde du compte
    sommeFrancs = round(sommeFrancs * 100.0) / 100.0; //Permet d'arrondir à 2 décimale après la virgule
    restcompte = round(restcompte * 100.0) / 100.0; // idem
    sommeEuro = round(sommeEuro * 100.0) / 100.0; // idem

    cout << "Somme CHF : " << sommeFrancs << ", Solde compte : " << restcompte << endl;

    cout << "+-------------------------------+" << endl;
    cout << "| " << endl;
    cout << "| " << nom << endl;
    cout << "| " << numcompte << endl;
    cout << "| " << endl;
    cout << "| Somme Euro             : " << sommeEuro << endl;
    cout << "| 1 CHF en Euro          : " << tauxchange << endl;
    cout << "|" << endl;
    cout << "| Somme CHF              : " << sommeFrancs << endl;
    cout << "|" << endl;
    cout << "| Frais                  : " << frais << endl;
    cout << "| Solde Compte           : " << restcompte << endl;
    cout << "|" << endl;
    cout << "+-------------------------------+" << endl;

    return EXIT_SUCCESS;
}