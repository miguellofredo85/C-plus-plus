#include <iostream>
using namespace std;

int main(){

bool fim{false};
const int max_length{15};
char name[max_length]{};

char frases[][90]{
  "La mejor manera de predecir el futuro es creándolo",
  " Procuremos más ser padres de nuestro porvenir que hijos de nuestro pasado",
  " El futuro comienza hoy, no manana",
  "El futuro está oculto detrás de los hombres que lo hacen",
  "No puedes escapar de la responsabilidad del mañana evadiéndola hoy",
  "Cambia tu vida hoy. No te juegues el futuro. Actúa ya, sin demora",
  "Estudia el pasado si quieres pronosticar el futuro",
  "Soñar con el futuro es mucho mejor que lamentarse por el pasado",
  "No hay nada como un sueño para crear el futuro",
  "El futuro depende de lo que hacemos en el presente",
  "Futuro vazio..."
};

  cout << "Ola queride qual e seu nome?" << endl;
  cin.getline(name, max_length);

while (!fim)
{

cout << "Ola queride " << name << " deixa te falar..." << endl;

srand(time(0));

size_t random_num = static_cast<size_t>(rand() % size(frases)); // static_cast e necesario

cout << frases[random_num] << endl;

cout << "Quere continuar? (Y / N): ";

char sim_nao;

cin >> sim_nao;

if(sim_nao == 'Y' || sim_nao == 'y'){
  fim;
}else{
  cout <<"Ate mais!" << endl;
  !fim;

  break;
}

}



return 0;
}