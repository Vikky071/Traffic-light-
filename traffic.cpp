#include <iostream> 
#include <cctype>
#include <iomanip>

using namespace std;

void intro();
int main(){
    intro();
    string traffic;
    cout << "Enter traffic light: ";
    cin >> traffic;

    cout << "\n";

    if(traffic == "red"){
        cout << "stop!";
    }
    else if(traffic == "yellow"){
        cout << "ready";
    }
    else if(traffic == "Green"){
        cout << "Go";
    }


    return 0;
}
void intro(){
    cout << "\n\n\n\t     TRAFFIC LIGHT MANAGRMENT SYSTEM";
    cout << "\n\n\n\n\t     MADE BY: IGE-FOLORUNSHO VICTORIA OREOLUWA";
    cout << "\n\n\n\n\t     MATRIC NO: H/CTE/21/0665";
    cout << "\n\n\n\n\t     SUPERVISOR : ENGR NZUBE";
    cout << "\n\n\n\n\t     SCHOOL : THE FEDERAL POLYTECHNIC ILARO";
    cin.get();
}
