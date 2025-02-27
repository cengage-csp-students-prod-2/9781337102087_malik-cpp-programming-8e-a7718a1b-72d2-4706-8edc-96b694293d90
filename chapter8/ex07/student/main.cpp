#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string findWinner(string candidates[], int votes[], int size) {
    int maxVotes = votes[0];
    string winner = candidates[0];
    for (int i = 1; i < size; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = candidates[i];
        }
    }
    return winner;
}

int calTotalVotes(int votes[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += votes[i];
    }
    return total;
}

int main() {
    string candidates[5];
    int votes[5];
    
    cout << "Enter the last names of " << 5 << " candidates and their votes received:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Candidate " << (i + 1) << " name: ";
        cin >> candidates[i];
        cout << "Votes received: ";
        cin >> votes[i];
    }
    
    int totalVotes = calTotalVotes(votes, 5);
    string winner = findWinner(candidates, votes, 5);
    
    cout << "Candidate    Votes Received   % of Total Votes";
    cout << fixed << setprecision(2);
    for (int i = 0; i < 5; i++) {
        double percentage = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << candidates[i] << "     " << votes[i] << "     " << percentage << "\n";
    }
    
    cout << "\nTotal Votes: " << totalVotes << "\n";
    cout << "The Winner of the Election is " << winner << "\n";
    
    return 0;
}
