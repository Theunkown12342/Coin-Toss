#include "Game.h"

#include <iostream>
#include <string>
using namespace  std;

Game:: Game() 
{
	srand(time(0));
	numberOfCoins = 3;
	
	coins = new Coin[3]
	{
		Coin(5),
		Coin(10),
		Coin(25)
	};
	
	targetBalance = 1.0;
	 totalScore = 0;
	rounds = 0;
}
void Game:: setCoin(Coin* moreCoin) {
	coins = moreCoin;
}
Game::Game(double target) : Game() {
	targetBalance = target;
}

Game:: ~Game() 
{
	delete[] coins; 
}

void Game::printFlipResults() {
	double roundTotal = 0; 
	for (int i = 0; i < numberOfCoins; i++) {
cout << coins[i].getSideUp() << endl;
		cout << " + value = " << to_string(coins[i].getCentValue()) << endl;
		if (coins[i].isItHeads())
			roundTotal += (coins[i].getCentValue() * .01);
	}
	cout << "Your total for this round is " << roundTotal << endl;
	totalScore += roundTotal;
	cout << "Your total for the game so far is " << totalScore << endl;
		


}
void Game:: FlipCoins() {
	for (int i = 0; i < numberOfCoins; i++)
	{
		coins[i].flip();
	}
}
void Game::printScore()
{
	cout << "score " << endl;
}
int Game:: getScore() {
	return totalScore;
}
int Game::getRounds()
{
	return rounds;
}


void Game::playGame() {
	cout << " Welcome to the game flipper game " << endl;
	for (int i = 1; totalScore < targetBalance; i++)
	{
		FlipCoins();
		printFlipResults();
		rounds++;
	}
	cout << "It took you " << rounds << " rounds to get the $ " << targetBalance << endl;
}

