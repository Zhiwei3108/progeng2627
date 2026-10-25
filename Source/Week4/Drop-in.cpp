#include <iostream>
#include <cstdlib>
#include <ctime>


int main() {
    // Generate and display a random starting position
    // Initialise the move counter
// Seed the random number generator
    std::srand(std::time(NULL));

    // Generate random coordinates from 2 to 7
    int row = std::rand() % 6 + 2;
    int col = std::rand() % 6 + 2;
    int n=0;
    std::cout<<"position row "<<row<<" col "<<col<<std::endl;
    while (!(row==1||row==8 ) && !(col==1||col==8)){
            int n_row=0;
            int n_col=0;
            std::cout<<"row"<<std::endl;
            std::cin>>n_row;
            std::cout<<"col"<<std::endl;
            std::cin>>n_col;
            if ((n_row == row+2 || row-2 )&&(n_col==col+1||col-1) || (n_row== row+1||row-1)&&(n_col==col+2||col-2)){
                row=n_row;
                col=n_col;
            }
            else {
                if ((row<1||row>8)||(col<1||col>8)){
                    std::cout<<"false input"<<std::endl;
                }
                std::cout<<"false input"<<std::endl;
            }
            n++;
    }
    std::cout<<"win in "<<n<<"steps"<<std::endl;
    // While the knight has not reached a corner square:
        // Read destination coordinates from the user
        // If the move is valid:
            // Update position, increment move counter, display new position
        // Otherwise:
            // Display invalid move message

    // Display the total number of valid moves
    // taken to reach a corner square.
}