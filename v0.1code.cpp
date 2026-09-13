#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

struct studentas {
    std::string var, pav;
    std::vector<int> paz;
    int egz, rez;
};

int main()
{
    using namespace std;

    int n;
    char kl;

    studentas A;

    cout << "iveskite varda: ";
    cin >> A.var;

    cout << "iveskite pavarde: ";
    cin >> A.pav;

    while (true) {
        cout << "iveskite sem. paz.: ";
        cin >> n;
        A.paz.push_back(n);

        cout << "ar studentas turi dar pazymiu? t/n: ";
        cin >> kl;

        if (kl == 'n' || kl == 'N')
            break;
    }

    cout << "iveskite egzamina: ";
    cin >> A.egz;

    cout << "studento duomenys\n";
    cout << left << setw(15) << "|Vardas" << left << setw(20) << "|Pavarde";
    for(int sk=1; sk <= A.paz.size(); sk++){
        cout << right << setw(5) << "|Paz"<< sk;
    }
    
    cout << right << "|" << setw(10) << "Egzaminas" << "|\n";
    cout << left << "|" << setw(13) << A.var << "|" << setw(15) << A.pav;

    for (int sk : A.paz) {
        cout << right << setw(5) << sk;
    }

    cout << right << setw(10) << A.egz;

    return 0;
}