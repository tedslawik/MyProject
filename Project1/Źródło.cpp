#include <iostream>
#include <string>
using namespace std;

void liczba(int liczba,string tab[])
{
	
	cout << "Twoja liczba slowanie to : " << tab[liczba] << endl;


}
int main() {
	int num1,num;
	do {
		cout << "Wpisz jakas liczbe : ";
		cin >> num;
		cout << "Twoja liczba to  : " << num << endl;
		static string help[11] = { "zero","one","two","three","four","five","six","seven","eight","nine","ten" };
		liczba(num, help);
	} while (num != 999);
	system("PAUSE");

	}