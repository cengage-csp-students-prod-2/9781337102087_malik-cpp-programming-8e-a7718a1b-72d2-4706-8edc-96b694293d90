#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    const int numCandidates = 5;

    // Task #01: Hardcoded candidate names and votes
    string* candidates = new string[numCandidates] {
        "Vader", "Kirk", "Adama", "Reynolds", "Oneill"
    };

    int* votes = new int[numCandidates] {
        1300, 1250, 1000, 1615, 1470
    };

    // Task #02: Calculate total votes
    int totalVotes = 0;
    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votes[i];
    }

    // Output header
    cout << fixed << setprecision(2);
    cout << "Candidate\tVotes Received\t% of Total Votes\n";

    // Find the winner and print results
    int maxVotes = -1;
    string winner;

    for (int i = 0; i < numCandidates; i++) {
        double percent = (static_cast<double>(votes[i]) / totalVotes) * 100;
        cout << candidates[i] << "\t" << votes[i] << "\t\t" << percent << endl;

        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = candidates[i];
        }
    }

    // Output total and winner
    cout << "Total\t\t" << totalVotes << endl;
    cout << "The Winner of the Election is: " << winner << endl;

    // Clean up
    delete[] candidates;
    delete[] votes;

    return 0;
}