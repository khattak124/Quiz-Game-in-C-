#include <iostream>
using namespace std;

// Function for quiz
void quizLevel(int level, string name) {
    int score = 0, ans;

    cout << "\n\033[1;36m--- Quiz Started ---\033[0m\n";

    if(level == 1) {
        cout << "\n\033[1;32mLevel: EASY\033[0m\n";

        cout << "Q1: 2 + 2 = ?\n1) 3  2) 4  3) 5\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q2: 5 - 3 = ?\n1) 2  2) 3  3) 4\n";
        cin >> ans; if(ans == 1) score++;

        cout << "Q3: 10 / 2 = ?\n1) 4  2) 5  3) 6\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q4: Capital of Pakistan?\n1) Lahore  2) Karachi  3) Islamabad\n";
        cin >> ans; if(ans == 3) score++;

        cout << "Q5: Even number?\n1) 3  2) 7  3) 8\n";
        cin >> ans; if(ans == 3) score++;
    }

    else if(level == 2) {
        cout << "\n\033[1;33mLevel: MEDIUM\033[0m\n";

        cout << "Q1: 6 * 5 = ?\n1) 30  2) 25  3) 35\n";
        cin >> ans; if(ans == 1) score++;

        cout << "Q2: 15 - 7 = ?\n1) 6  2) 8  3) 9\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q3: Which is programming language?\n1) HTML  2) CSS  3) C++\n";
        cin >> ans; if(ans == 3) score++;

        cout << "Q4: 9 + 8 = ?\n1) 17  2) 16  3) 18\n";
        cin >> ans; if(ans == 1) score++;

        cout << "Q5: Odd number?\n1) 4  2) 9  3) 10\n";
        cin >> ans; if(ans == 2) score++;
    }

    else if(level == 3) {
        cout << "\n\033[1;31mLevel: HARD\033[0m\n";

        cout << "Q1: 12 / 4 = ?\n1) 2  2) 3  3) 4\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q2: 7 * 8 = ?\n1) 54  2) 56  3) 58\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q3: Who developed C++?\n1) Dennis Ritchie  2) Bjarne Stroustrup  3) James Gosling\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q4: 20 - 5 = ?\n1) 10  2) 15  3) 20\n";
        cin >> ans; if(ans == 2) score++;

        cout << "Q5: Prime number?\n1) 4  2) 6  3) 7\n";
        cin >> ans; if(ans == 3) score++;
    }

    // Score Display
    cout << "\n\033[1;34m" << name << ", Your Score: " << score << "/5\033[0m\n";

    // Result Analysis
    if(score >= 4)
        cout << "\033[1;32mExcellent!\033[0m\n";
    else if(score >= 2)
        cout << "\033[1;33mGood!\033[0m\n";
    else
        cout << "\033[1;31mNeeds Improvement!\033[0m\n";
}

int main() {
    int choice;
    char again;
    string name;

    cout << "\033[1;35mEnter your name: \033[0m";
    cin >> name;

    do {
        cout << "\n\033[1;36m===== QUIZ GAME =====\033[0m\n";
        cout << "1. Easy\n2. Medium\n3. Hard\n";
        cout << "Select Level: ";
        cin >> choice;

        if(choice >= 1 && choice <= 3)
            quizLevel(choice, name);
        else
            cout << "\033[1;31mInvalid Choice!\033[0m\n";

        cout << "\nDo you want to play again? (y/n): ";
        cin >> again;

    } while(again == 'y' || again == 'Y');

    cout << "\n\033[1;35mThank you for playing!\033[0m\n";
    return 0;
}