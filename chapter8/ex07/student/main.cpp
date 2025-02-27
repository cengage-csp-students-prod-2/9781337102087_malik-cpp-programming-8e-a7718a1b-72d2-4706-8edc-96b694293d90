#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int NUM_CANDIDATES = 5;

int calculateTotalVotes(int votes[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += votes[i];
    }
    return total;
}

string determineWinner(string candidates[], int votes[], int size) {
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

int main() {
    string candidates[NUM_CANDIDATES];
    int votes[NUM_CANDIDATES];
    
    cout << "Enter the last names of " << NUM_CANDIDATES << " candidates and their votes received:\n";
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        cout << "Candidate " << (i + 1) << " name: ";
        cin >> candidates[i];
        cout << "Votes received: ";
        cin >> votes[i];
    }
    
    int totalVotes = calculateTotalVotes(votes, NUM_CANDIDATES);
    string winner = determineWinner(candidates, votes, NUM_CANDIDATES);
    
    cout << "\nCandidate    Votes Received   % of Total Votes";
    cout << fixed << setprecision(2);
    for (int i = 0; i < NUM_CANDIDATES; i++) {
        double percentage = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << candidates[i] << "     " << votes[i] << "     " << percentage << "\n";
    }
    
    cout << "\nTotal Votes: " << totalVotes << "\n";
    cout << "The Winner of the Election is " << winner << "\n";
    
    return 0;
}
