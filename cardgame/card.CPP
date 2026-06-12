#include<iostream.h>
#include<conio.h>
const int clubs =0;
const int diamonds = 1;
const int hearts = 2;
const int spades = 3;

const int jack = 11;
const int queen = 12;
const int king =13;
const int ace = 14;

struct card
{
	int number; //2 to 10, jack, queen, king and ace
	int suit;  //0 to 3 clubs, spades, diamonds, hearts
};

void main()
{
	clrscr();
	card prize, temp, chosen;
	int position;
	card card1 = {7,clubs};
	cout<<"Card 1 is 7 of club"<<endl;

	card card2 = {jack, hearts };
	cout<<"Card 2 is jack of hearts" <<endl;

	card card3 = {king, diamonds};
	cout<<"Card 3 is king of diamonds"<<endl;

	prize = card2;

	cout<<"I am swapping card 2 and 3\n";
	temp = card2;
	card2 = card3;
	card3 = temp;

	cout<<"I am swapping card 1 and 3\n";
	temp = card3;
	card3 = card1;
	card1 = temp;

	cout<<"I am swapping card 1 and 2\n";
	temp = card1;
	card1 = card2;
	card2 = temp;

	cout<<"Now, where (1,2 or 3) is the jack of hearts? ";
	cin>>position;

	switch(position)
	{
		case 1:
			chosen = card1;
			break;
		case 2:
			chosen = card2;
			break;
		case 3:
			chosen = card3;
			break;
	}
	if(chosen.number==prize.number && chosen.suit == prize.suit)
	{
		cout<<"YES!!! "<<position<<"contains jack of hearts";
	}
	else
	{
		cout<<"Sorry better luck next time"<<endl;
	}
	getch();

}