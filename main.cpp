#include <iostream>
#include <thread>
#include <chrono>
int clubs = 0;
int diamonds = 1;
int hearts = 2;
int spades = 3;

int jack = 11;
int queen = 12;
int king = 13;
int ace = 14;
using namespace std; // Thats why it failed
struct card {
	int number; //2 to 10, jack, queen, king and ace
	int suit;  //0 to 3 clubs, spades, diamonds, hearts
};
int screen_cl() {
system("clear");
return 0;
    }
void startup() {
std::cout << R"(         
▞▀▖▝▀▖▙▀▖▞▀▌  ▞▀▖▛▀▖▛▀▖
▌ ▖▞▀▌▌  ▌ ▌▗▖▌ ▖▙▄▘▙▄▘
▝▀ ▝▀▘▘  ▝▀▘▝▘▝▀ ▌  ▌  
)";
}
int main() {
	screen_cl();
	startup();
	this_thread::sleep_for(std::chrono::seconds(3));
	screen_cl();
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
    this_thread::sleep_for(std::chrono::seconds(7)); // Gives the user time to think
    // Should I clear screen after?
	cout<<"Now, where (1,2 or 3) is the jack of hearts? ";
	cin >> position;

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
	if(chosen.number == prize.number && chosen.suit == prize.suit)
	{
		cout <<"YES!!! "<< position << " contains jack of hearts"; // Spacing
	}
	else
	{
		cout <<"Sorry better luck next time"<<endl;
	}
	// getch(); not a function, and doesn't have much context
	return 0;

}
