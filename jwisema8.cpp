/* Program Name: justin.cpp
 *  Student Name: Justin Wiseman
 *  Net ID: jwisema8
 *  Student ID: 000-66-6873
 *  Program Description: This cpp file contains the creation of Justin's
 * assigned functions for the Tetris team.
 *  */

// #include <SFML/Audio.hpp>
#include <iostream>
#include <vector>

using namespace std;

void display() {
  system("clear");
  // Top border
  cout << "+---------------------+" << endl;
  cout << "Score: "
       << "SCOREVAR HERE" << endl;
  cout << "+---------------------+" << endl;

  std::vector<std::vector<char>> board(20, std::vector<char>(10, ' '));

  for (int y = 0; y < 20; y++) {
    cout << "| ";
    for (int x = 0; x < 10; x++) {
      if (board[y][x] != 0) {
        cout << "\033[48;5;" << board[y][x] + 30 << "mâ—¼\033[0m ";
      } else {
        cout << ". ";
      }
    }
    cout << "|" << endl;
  }
  cout << "+---------------------+" << endl;
  cout << "Next Piece = "
       << "INSERT PIECE VARIABLE HERE" << endl;

  cout << "+---------------------+" << endl;
  cout << "Statistics:" << endl;
  cout << "I Pieces: "
       << "STATVAR HERE" << endl;
  cout << "O Pieces: "
       << "STATVAR HERE" << endl;
  cout << "T Pieces: "
       << "STATVAR HERE" << endl;
  cout << "S Pieces: "
       << "STATVAR HERE" << endl;
  cout << "Z Pieces: "
       << "STATVAR HERE" << endl;
  cout << "J Pieces: "
       << "STATVAR HERE" << endl;
  cout << "L Pieces: "
       << "STATVAR HERE" << endl;

  cout << "+---------------------+" << endl;
}

/*void music() {
    sf::Music music;

    if
(!music.openFromFile("C:\Users\stark\Desktop\cs102files\BlockAndRoll\original-tetris-theme-(tetris-soundtrack)-made-with-Voicemod.mp3"))
{ cerr << "Error loading music file!" << endl; return;
    }

    music.setLoop(true);
    music.play();

    while (music.getStatus() == sf::SoundSource::Playing) {

        sf::sleep(sf::milliseconds(100));
    }
}*/

int main() {
  display();
  return 0;
}
