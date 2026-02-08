
/* 
True Probability of getting three tails in a row:
--> Since each of the coin flips are independent with each other with a 50 % chance for both head and tails,
the probability of getting three tails in a row will be 
1/2 * 1/2 * 1/2 = 0.125 --> 12.5 %
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int num_flips = 0;
int tails_count = 0;
int streak_counts[1000];
int longest_streak = 0;
int current_streak = 0;

bool coinFlip(void) {
    return rand() % 2;
}

void reset_game() {
    tails_count = 0;
    longest_streak = 0;
    current_streak = 0;
    for (int i = 0; i < 1000; i++) {
        streak_counts[i] = 0;
    }
}

// the streak count array holds the count of streak with its index
//example streak_count[2] = 10 means that 2 tails in a row occured ten times

void streak_counter() {
    for (int i = 0; i < num_flips; i++) {
        bool result = coinFlip();
        
        if (result == 0) {
            tails_count++;
            current_streak++;
        } else if(result ==1) {
            if (current_streak > 0) {
                streak_counts[current_streak]++;
                if (current_streak > longest_streak) {
                    longest_streak = current_streak;
                }
            }
            current_streak = 0;
        }
    }
    // if flip ends with tail then else condition will not meet so checked again
    if (current_streak > 0) {
        streak_counts[current_streak]++;
        if (current_streak > longest_streak) {
            longest_streak = current_streak;
        }
    }
}

void display_streaks() {
    for (int i = 1; i <= longest_streak; i++) {
        if (streak_counts[i] > 0) {
            int count = streak_counts[i];
            int percentage = (count * 100) / num_flips;
            
            cout << i << " tails in a row --> " << count << " in percentage :  " << percentage << "%\n";
        }
    }
}

int main() {
    srand(time(0));
    
    char play_again = 'y';
    
    while (play_again == 'y' || play_again == 'Y') {
        reset_game();
        
        cout << "how many times to flip the coin? ";
        cin >> num_flips;
        
        streak_counter();
        
        cout << "\n you flipped a coin " << num_flips << " times:\n\n";
        cout << "number of tails --> " << tails_count << "\n";
        
        
        cout << "tail winning streaks:\n";
        display_streaks();
        
        cout << "\nDo you want to play again? (y/n): ";
        cin >> play_again;
    }
    
    return 0;
}