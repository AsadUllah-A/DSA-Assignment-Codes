#include <iostream>
using namespace std;

int main() 
{
    int participants;
    cout<<"Enter the numbers of Participants : ";
    cin>>participants;
    int subjects = 5;

    int scores[participants][subjects];
    int totalScores[participants] = {0};

    cout << "Enter the scores for each participant in 5 subjects:\n";
    for (int i = 0; i < participants; i++) 
    {
        cout << "Participant #" << i + 1 << ":\n";
        for (int j = 0; j < subjects; j++) 
        {
            cout << "   Score in Subject #" << j + 1 << ": ";
            cin >> scores[i][j];
        }
    }

    for (int i = 0; i < participants; i++) 
    {
        for (int j = 0; j < subjects; j++) 
        {
            totalScores[i] += scores[i][j];
        }
    }

    int maxScore = totalScores[0];
    int topParticipant = 0;

    for (int i = 1; i < participants; i++) 
    {
        if (totalScores[i] > maxScore) 
        {
            maxScore = totalScores[i];
            topParticipant = i;
        }
    }

    int participantIndices[participants];
    for (int i = 0; i < participants; i++) 
    {
        participantIndices[i] = i;
    }

    for (int i = 0; i < participants - 1; i++) 
    {
        for (int j = 0; j < participants - i - 1; j++) 
        {
            if (totalScores[participantIndices[j]] > totalScores[participantIndices[j + 1]]) 
            {
                int temp = participantIndices[j];
                participantIndices[j] = participantIndices[j + 1];
                participantIndices[j + 1] = temp;
            }
        }
    }

    cout << "\nTotal scores of each participant:\n";
    for (int i = 0; i < participants; i++) 
    {
        cout << "Participant #" << i + 1 << ": " << totalScores[i] << " points\n";
    }

    cout << "\nThe participant with the highest score is Participant #" << topParticipant + 1 
         << " with " << maxScore << " points.\n";

    cout << "\nParticipants sorted by total scores (ascending order):\n";
    for (int i = 0; i < participants; i++) 
    {
        int index = participantIndices[i];
        cout << "Participant #" << index + 1 << ": " << totalScores[index] << " points\n";
    }

    return 0;
}
