/* Program Name: justin.h
*  Student Name: Justin Wiseman
*  Net ID: jwisema8
*  Student ID: 000-66-6873
*  Program Description: This header file contains the initialization of Justin's workload for the Tetris team.
*  */

#include <vector>

class Tetris{
    public: 
        Tetris();
        ~Tetris();
        void display();
        vector<int> pieceFall();
        void music();

    private:
        int leaderboard();
        void clearLeaderboard();
}
