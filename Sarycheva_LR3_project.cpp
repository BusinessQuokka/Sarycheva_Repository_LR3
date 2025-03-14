#include <iostream>
#include <string>

using namespace std;


void task1();
void task2();
void task3();
void exitProgram();


int main() {
  int programka;

  do {
    cout << "\nМеню:" << endl;
    cout << "1. Задача 1 " << endl;
    cout << "2. Задача 2 " << endl;
    cout << "3. Задача 3 " << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите пункт меню: ";
 
     

 if (!(cin >> programka)) {
      cout << "Ошибка: Некорректный ввод. Пожалуйста, введите число." << endl;
      cin.clear(); // Очищаем ошибки
      cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Удаляем "мусор" из входного потока
      programka = -1; // Чтобы цикл продолжался
      continue; // Переходим к следующей итерации цикла
    }

    switch (programka) {
      case 1:
        cout << "Выбрана задача 1." << endl;
        task1();
        break;
      case 2:
        cout << "Выбрана задача 2." << endl;
        task2();
        break;
      case 3:
        cout << "Выбрана задача 3." << endl;
        task3();
        break;
      case 0:
        cout << "Выход из программы." << endl;
        exitProgram();
        break;
    }
  } while (programka != 0);

  return 0;

}
void task1() {
  cout << "Здесь будет код для решения задачи 1." << endl;
}

void task2() {
  cout << "Здесь будет код для решения задачи 2." << endl;
}

void task3() {
  cout << "Здесь будет код для решения задачи 3." << endl;
}

void exitProgram() {
  
}