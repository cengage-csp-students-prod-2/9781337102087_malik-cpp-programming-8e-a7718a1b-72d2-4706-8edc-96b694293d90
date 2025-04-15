#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numCandidates;

    // Prompt user for number of candidates
    cout << "Enter the number of candidates: ";
    cin >> numCandidates;
    cin.ignore(); // Clear newline after cin

    // Task #01: Dynamic array allocation
    string* candidates = new string[numCandidates];
    int* votes = new int[numCandidates];

    // Initialize vote count to 0 (safety)
    for (int i = 0; i < numCandidates; i++) {
        votes[i] = 0;
    }

    // Input candidate names and votes
    for (int i = 0; i < numCandidates; i++) {
        cout << "Enter name for candidate #" << (i + 1) << ": ";
        getline(cin, candidates[i]);

        cout << "Enter votes received by " << candidates[i] << ": ";
        cin >> votes[i];
        cin.ignore(); // Flush newline after reading vote count
    }

    // Task #02: Calculate total votes
    int totalVotes = 0;
    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votes[i];
    }

    // Display the election results
    cout << fixed << setprecision(2);
    cout << "\nCandidate\tVotes Received\t% of Total Votes\n";

    int maxVotes = -1;
    string winner;

    for (int i = 0; i < numCandidates; i++) {
        double percent = (totalVotes > 0) ? (static_cast<double>(votes[i]) / totalVotes) * 100 : 0.0;
        cout << candidates[i] << "\t" << votes[i] << "\t\t" << percent << endl;

        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = candidates[i];
        }
    }

    cout << "Total\t\t" << totalVotes << endl;
    cout << "The Winner of the Election is: " << winner << endl;

    // Clean up memory
    delete[] candidates;
    delete[] votes;

    return 0;
}