#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int numCandidates;


    cout << "Enter the number of candidates: ";
    cin >> numCandidates;
    cin.ignore(); 


    string* candidates = new string[numCandidates];
    int* votes = new int[numCandidates];

 
    for (int i = 0; i < numCandidates; i++) {
        cout << "Enter name for candidate #" << (i + 1) << ": ";
        getline(cin, candidates[i]);

        cout << "Enter votes received by " << candidates[i] << ": ";
        cin >> votes[i];
        cin.ignore(); 
    }

  
    int totalVotes = 0;
    for (int i = 0; i < numCandidates; i++) {
        totalVotes += votes[i];
    }

    
    cout << fixed << setprecision(2);
    cout << "\nCandidate\tVotes Received\t% of Total Votes\n";

    int maxVotes = votes[0];
    string winner = candidates[0];

    for (int i = 0; i < numCandidates; i++) {
        double percentage = (static_cast<double>(votes[i]) / totalVotes) * 100.0;
        cout << candidates[i] << "\t\t" << votes[i] << "\t\t" << percentage << endl;


        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = candidates[i];
        }
    }

    cout << "Total\t\t" << totalVotes << endl;
    cout << "The Winner of the Election is " << winner << endl;

    delete[] candidates;
    delete[] votes;

    return 0;
}
