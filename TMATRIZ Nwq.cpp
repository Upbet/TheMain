#include <stdio.h>

#define EX 10
#define FAV 5

main (){
	
int songs [EX+1];
int favs[FAV+1];
int fav;
int song, ex;
char resp;
int voler;
	
	do{
		
		voler = 0;
		for (song = 1; song <= EX; song ++ ){
		printf ("Esta usted reconociendo la cancion/");
		printf ("Vote cada\ncancion %i:",song);
		scanf ("%i",&songs[EX]);
		}
	
	
	printf("\n"); // Linea
	printf("\n"); // Linea
		for (song= 1; song <=FAV; song ++ ){
			printf("Procederemos a elegir tus 5 favoritas, dime una cancion:");
			scanf ("%i",&favs[FAV]);
		}
		for (song= 1; song <=FAV; song ++ ){
				printf("Has votado  la cancion %i con la nota %i\n", song, songs[EX]);
			}
			
		
		
		printf("\n"); // Linea	
		printf("Quieres dejar de encuestar Si (S) o no (N):");
			scanf ("%s",&resp);
			if (resp == 'S' || resp == 's'){
				voler = 1;
			}
	
	}while (voler == 0);
}
