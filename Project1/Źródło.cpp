#include <iostream>
#include <string>
using namespace std;

string liczba(int number,string tab[],string tab2[], string tab3[])
{
	string word;
	if (number < 20) {
		
		word = tab[number];

	}
	else if (number < 100)
	{
		if (number != 0)
		{
			//word = tab2[number % 10];
			word = word + tab2[number / 10];
		//	number /= 10;
			word = word + tab[number%10] + " ";
		}
		else
			word = "zero";
			
			
		 

	}
	return word;

}

string high_liczba( int num, string tab[], string tab2[], string tab4[])
{
	int index =1 ;
	string c = liczba(num / 100, tab, tab2, tab4);
	string d = liczba(num % 100, tab, tab2, tab4);
	string words, coma;
	coma = tab4[index];
	words = c + coma + d;
	return words;
};
string t_liczba( int num, string tab[], string tab2[], string tab4[]){
	string c = high_liczba(num / 1000, tab, tab2, tab4);
	string d = high_liczba(num % 1000, tab, tab2, tab4);
	string words, coma;
	coma = tab4[1];
	words = c + coma + d;
	return words;


};
void print(string s)
{
	cout << "Twoja liczba slowanie to : " << s << endl;
}

int main() {
	int num1,num;
	static string help[20] = {
		"",
		"one",
		"two",
		"three",
		"four",
		"five",
		"six",
		"seven",
		"eight",
		"nine",
		"ten",
		"eleven",
		"twelve",
		"thirteen",
		"fourteen",
		"fifteen",
		"sixteen",
		"seventeen",
		"eighteen",
		"nineteen" };
	static string tens[10]={"",
		"ten",
		"twenty",
		"thirty",
		"fourty",
		"fifty",
		"sixty",
		"seventy",
		"eighty",
		"ninety"

	};
	static string houndreds[10] = {
	"",
	"houndred",
	"thousand"
	};
	do {
		cout << "Wpisz jakas liczbe : ";
		cin >> num;
		cout << "Twoja liczba to  : " << num << endl;
		string out= liczba(num,help,tens,houndreds);
		string out2 = high_liczba( num,help,tens,houndreds);
		string out3 = t_liczba(num, help, tens, houndreds);
		if (num == 0) { 
			print("zero");
		}
		else if (num > 99)
		{
			print(out2);
		}

		else if (num < 99) {
			print(out);
		}
		
	} while (num != 999);
	system("PAUSE");

	}