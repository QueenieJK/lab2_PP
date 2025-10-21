// lab2_PP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector> 
using namespace std;

int main()
{
	//cout << "Zadanie 1.2:  " << endl << endl;
	//for (int i = 5; i <= 7; i++) {
		//cout << i << endl;}
	//for (int i = 5; i < 7; i++) {
		//cout << i << endl;}

	//cout << "Zadanie 1.3:  " << endl << endl;
	//for (int i = 0; i <= 10;i+=2) {
		//cout << i << endl;}
	//cout << "Zadanie 1.4:  " << endl << endl;
	//for (int i = 10; i >= 0; i--) {
		//cout << i << endl;}
	//cout << "Zadanie 2: " << endl << endl;
	//int fahr,celsius;
	//int start,limit,krok;
	//start = 0; 
	//limit = 200; 
	//krok = 20; 
	//fahr = start; 
	//while (fahr <= limit) {
		//celsius = 5 * (fahr - 32) / 9;
		//cout << fahr << "\t" << celsius << endl;
		//fahr = fahr + krok;}
	//cout << "Zadanie 3: " << endl << endl;
	//int fahr,celsius;
	//int start, limit,krok;
	//start = 0; 
	//limit = 200; 
	//krok = 20; 
	//fahr = start;
	//while (fahr <= limit){
		//float celsius = (5.0 / 9.0) * (fahr - 32.0);
		//cout << fahr << "\t " << celsius << endl;
		//fahr = fahr + krok;}
	//cout << "Zadanie 6: " << endl << endl;
	//int fahr, celsius;
	//int start, limit,krok;
	//start = 0; 
	//cout << "Podaj limit: " << endl;
	//cin >> limit;
	//cout << "Podaj krok: " << endl;
	//cin >> krok;
	//fahr = start;
	//while (fahr <= limit){
		//float celsius = (5.0 / 9.0) * (fahr - 32.0);
		//cout << fahr << "\t " << celsius << endl;
		//fahr = fahr + krok;}
	//cout << "Zadanie 7: " << endl << endl;
	//int liczba;
	//for (int i = 0; i < 10; i++) {
		//cout << "Podaj liczbe: " << endl;
		//cin >> liczba;
		//if (liczba > 0) {
			//cout << liczba << endl;}
		//else {
			//continue;}}
	//cout << "Zadanie 8: " << endl << endl;
	//for (int i = 0; i <= 100; i += 2) {
		//cout << i << endl;}
	//cout << "Zadanie 9: " << endl << endl;
	//int n;
	//cout << "Podaj n: " << endl;
	//cin >> n;
	//for (int i = 0; i <= 100; i++) {
		//if (i % n == 0) {
			//cout << i << endl;}}
	//cout << "Zadanie 10: " << endl << endl;
	//int n;
	//cout << "Podaj n: " << endl;
	//cin >> n;
	//int suma = 0;
	//for (int i = 1; i <= 100; i++) {
		//if (i % n == 0) {
			//suma += 1;}}
	//cout << suma << endl;	
	//cout << "Zadanie 11: " << endl << endl;
	//int a, b;
	//cout << " Podaj liczbe a: " << endl;
	//cin >> a;
	//cout << "Podaj liczbe b: " << endl;
	//cin >> b;
	//if (a < b) {
		//for (int i = a; i <= b; i++) {
			//if (i % 3 == 0) {
				//cout << i << endl;
			//}
		//}
	//}
	//else if (a > b) {
		//for (int i = b; i <= a; i++) {
			//if (i % 3 == 0) {
				//cout << i << endl;
			//}
		//}
	//}
	//else {
		//cout << "Liczby sa rowne" << endl;
		//if (a % 3 == 0) {
			//cout << a << endl;
		//}
	//}
	//cout << "Zadanie 12: " << endl;
//int n;
//double liczba, suma = 0;
//cout << "Wprowadz n: " << endl;
//cin >> n;
//cout << "Podaj  " << n << "  liczb" << endl;
//for (int i = 1; i <= n;i++){
	//cin >> liczba;
	//suma += liczba;
//}
//double srednia = suma / n;
//cout << "Srednia arytmetyczna wynosi : " << srednia << endl;
//cout << "Zadanie 13:  " << endl;
//for (int i = 100; i >= 0;i--) {
	//cout << i << endl;
//}
//cout << "Zadanie 14: " << endl;
//int a, b, c;
//cout << "Podaj pierwszą liczbe : " << endl;
//cin >> a;
//cout << " Podaj druga liczbe: " << endl;
//cin >> b;
//cout << " Podaj trzecia liczbe: " << endl;
//cin >> c;
//int najmniejsza = a;
//if (b < najmniejsza) {
	//najmniejsza = b;
//}
//if (c < najmniejsza) { 
	//najmniejsza = c; }
//cout << "Najmiejsza liczba to: " << najmniejsza << endl;
//cout<<"Zadanie 15: " << endl;
//int n, m;
//cout << "Podaj n: " << endl;
//cin >> n,
//cout << " Podaj m : " << endl;
//cin >> m;
//srand(time(0));
//vector<int> liczby;
//vector<int> wylosowane;
//for (int i = 0; i <= m; i++) {
	//liczby.push_back(i); 
//}
//for (int i = 0;i < n;i++) {
	//int index = rand () % liczby.size();
	//wylosowane.push_back(liczby[index]);
//}
//cout << "Wylosowane liczby: ";
//for (int i = 0; i < wylosowane.size(); i++) {
	//cout << wylosowane[i] << " ";
//}
//cout << "Zadanie 16:  " << endl;
//int szczesliwy;
//cout << "Podaj swoj szczesliwy numerek: ";
//cin >> szczesliwy;
//srand(time(0)); 
//vector<int> liczby;      
//vector<int> wylosowane; 
//for (int i = 1; i <= 10; i++) {
	//liczby.push_back(i);
//}
//for (int i = 0; i < 10; i++) {
	//int index = rand() % liczby.size();      
	//wylosowane.push_back(liczby[index]);   
//}
//int licznik = 0;
//for (int i = 0; i < wylosowane.size(); i++) {
	//if (wylosowane[i] == szczesliwy) {
		//licznik++;
	//}
//}

//cout << "Wylosowane liczby: ";
//for (int i = 0; i < wylosowane.size(); i++) {
	//cout << wylosowane[i] << " ";
//}
//cout << endl;

//cout << "Szczesliwy numerek pojawil sie " << licznik << " razy." << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
