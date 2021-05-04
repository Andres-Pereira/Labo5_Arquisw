#include <iostream>
#include "Feed.h";
#include"Subscriber.h"
using namespace std;

int main() {
	
	Feed CulturaColectiva("Cultura Colectiva Oficial");


	Subscriber Subs1(&CulturaColectiva);
	Subscriber Subs2(&CulturaColectiva);
	Subscriber Subs3(&CulturaColectiva);
	CulturaColectiva.attach(&Subs1);
	CulturaColectiva.attach(&Subs2);
	CulturaColectiva.attach(&Subs3);

	//Post
	CulturaColectiva.newPost("Economia Rosa: El poderoso mercado detras de la comunidad LGBT+");

	system("pause");
	return 0;
}