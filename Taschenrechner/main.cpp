#include <iostream>

using namespace std;

// Deklaration der Taschenrechner-Funktionen
void Taschenrechner();
void add(float, float);
void sub(float, float);
void mul(float, float);
void div(float, float);
void pot(float, float);
void root(float, float);

// Aufruf der Main Function (Einstiegspunkt)
int main()
{
	Taschenrechner();
	system("pause");
	return 0;
}


// Taschenrechner
void Taschenrechner()
{

	float Zahl[2]		= { 0 };
	char Rechenart		= char(0);
	char NeuerVersuch	= char(0);
	bool Continue		= false;

	do
	{	
		cout << "Hallo das ist ein Taschenrechner!" << endl;
		cout << "Geben Sie zwei Zahlen ein: " << endl;

		for (int i = 0; i < 2; i++)
		{
			cout << "Geben Sie die " << i + 1 << ". Zahl ein" << endl;
			cin >> Zahl[i];
		}

		cout << "Welche Rechenart soll durchgefuehrt werden: '+' '-' '*' '/' '^' 'w' ? ";
		cin >> Rechenart;

		cout << "Die Rechnung lautet: " << Zahl[0] << " " << Rechenart << " " << Zahl[1] << endl;

		// Auswahl der Rechenoperation
		switch (Rechenart)
		{
		case '+':
			add(Zahl[0], Zahl[1]);
			break;

		case '-':
			sub(Zahl[0], Zahl[1]);
			break;

		case '*':
			mul(Zahl[0], Zahl[1]);
			break;

		case '/':
			div(Zahl[0], Zahl[1]);
			break;

		case '^':
			pot(Zahl[0], Zahl[1]);
			break;

		case 'w':
			root(Zahl[0], Zahl[1]);
			break;

		default:
			cout << "Keine gueltige Rechenoperation!" << endl;
			break;
		}

		cout << "Moechten Sie es noch einmal rechnen? [j,n]: ";
		cin >> NeuerVersuch;
	
		if (NeuerVersuch == 'j')
		{
			Continue = true;
			system("cls");	// Clear Screen
		}
		else
		{
			Continue = false;
			cout << "Programm wird beendet!" << endl;
		}

	} while (Continue);
	
}


// Addieren
void add(float zahl1, float zahl2)
{
	cout << "Das Ergebnis der Addition lautet: " << zahl1 + zahl2 << endl;
}

// Subtrahieren
void sub(float zahl1, float zahl2)
{
	cout << "Das Ergebnis der Subtraktion lautet: " << zahl1 - zahl2 << endl;
}

// Multiplizieren
void mul(float zahl1, float zahl2)
{
	cout << "Das Ergebnis der Multiplikation lautet: " << zahl1 * zahl2 << endl;
}

// Dividieren
void div(float zahl1, float zahl2)
{

	if (zahl2 != 0)
	{
		cout << "Das Ergebnis der Division lautet: " << zahl1 / zahl2 << endl;
	}
	else
	{
		cout << "Teilen durch 0 ist nicht moeglich!" << endl;
	}
}

// Potenzieren
void pot(float zahl1, float zahl2)
{
	cout << "Das Ergebnis der Potenzierung lautet: " << pow(zahl1, zahl2) << endl;
}

// nte-Wurzel 
void root(float zahl1, float zahl2)
{
	cout << "Das Ergebnis der Wurzel lautet: " << pow(zahl1, (1 / zahl2)) << endl;
}


