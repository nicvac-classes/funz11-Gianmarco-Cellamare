#include <iostream>
using namespace std;


int budgetiniziale(int &budget) {
   budget=random(1001);
   return budget;

}

int raccoltafondi(int budget,int importo){
   budget=budget+importo;
   return budget;

}

int spesaimprevista(int budget,int importo){
   budget=budget-importo;
   return budget;  

}

string leggicomando(){
   string c;
   do{
      cout << "Comanda da inserire:  [ R] Raccolta fondi, [P] Previsione del budget,[S] Spesa imprevista,[X]Esce dal programma." << endl;
      cin >> c;
   }while (c != "R" && c != "P" && c != "S" && c != "X"); 


}


int main() {
    string c;
    int importo, budget, percentuale;
    budget=random(1001);
    do {
       c=leggicomando();
       if c="R"{
          budget=random(1001);
          cout << "Inserisci importo per la raccolta fondi" << endl;
          cin >> importo;
          importo = raccoltafondi (importo,budget);

       }

       if c="P" {
          budget=random(1001);
          cout << "Aggiungi una percentuale al budget per simulare una previsione del budget" << endl;
          cin<< percentuale;
          percentuale=previsionedelbudget(budget,percentuale);
       }

       if c="S" {
          budget=random(1001);
          cout << "Inserisci importo per la spesa prevista" << endl;
          cin >> importo;
          importo=spesaimprevista(importo,budget);



       }

    





    }while (c!="X");
}
