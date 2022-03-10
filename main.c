#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
#include "math.h"

//Definir une structure pour contenir une valeur et ses deux dérivés


int main()
{
	int _i;
	// Ouvrir un fichier demo.txt afin d'en lire le contenu	
	FILE *f = fopen("demo.txt", "r");
	// La premi�re ligne du fichier est un entier contenant le nombre de valeur	
	fscanf(f, "%d", &_);
	// Les lignes suivantes sont des entiers devant �tre lues
	for (_i = 0; _i < _; _i++)
	{
		fscanf(f, "%d", &_);
		// ...
	}	

	// Une fois la lecture termin�, vous devez fermer le fichier convenablement	
	fclose(f);
	// Des points sont donn�es sur la validation d'ouverture et de lecture du fichier

	

		// Dans un deuxi�me temps, calculez la d�riv� premi�re des valeurs lues (En double)	
		
		// D�riv�s num�rique = (Diff�rence de valeur / Diff�rence de temps)
		// Pour l'examen la frequence sp�cifi� � 10Hz 
		// 1 Hz = 1 fois par seconde
		// Puisqu'il n'est pas possible de calculer le tout pour la premi�re valeur car vous devez conna�tre la donn�e pr�c�dente, placez NAN
		
		
		// Dans un troisi�me temps, calculez la d�riv� seconde (En double)
		// D�riv�s num�rique = (Diff�rence de valeur / Diff�rence de temps)
		

		// Une fois les donn�es calcul�s, �crivez les donn�es initiale ainsi que les 2 d�riv�s dans un fichier "output.csv"
		// Les donn�es seront sous le format %d,%lf,%lf\n
		// Vous pourrez visualisez les informations sorties dans excel.
	
		//Affichez aussi la distance parcourrue dans le terminal

		//Une fois les donn�es �crite dans le fichier de sortie, assurez-vous d'avoir ferm� chaque fichier et d'avoir lib�r� la m�moire

	return 0;
}