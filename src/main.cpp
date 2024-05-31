#include<iostream>
#include <vector>
#include <string>

#include"Candidate.h"
#include"CandidateManager.h"
using namespace std;

int main() {
    CandidateManager manager;

    // Input candidates' details
    char choice;
    do {
    	cout<<"Enter candidate details:"<<endl;
        string name, email;
        int experienceYears;
        bool hasCppExperience;
        bool hasJavaExperience;
         bool cdacStudent;

        cout << "Enter candidate name: ";
        getline(cin, name);


        cout << "Enter candidate email: ";
        getline(cin, email);


        cout << "Enter years of experience: ";
        cin >> experienceYears;

        cout << "Does the candidate have experience in C++? (1 for yes, 0 for no): ";
        cin >> hasCppExperience;

         cout << "Does the candidate have experience in Java? (1 for yes, 0 for no): ";
        cin >> hasJavaExperience;

         cout << "Does the candidate is cdacStudent? (1 for yes, 0 for no): ";
        cin >> cdacStudent;


        manager.addCandidate(new Candidate(name, email, experienceYears, hasCppExperience,hasJavaExperience,cdacStudent));

        cout << "Do you want to add another candidate? (y/n): ";
        cin >> choice;

    } while (choice == 'y');

    // Shortlist candidates based on criteria
    int minExperience;
    bool requiresCppExp;
    bool requiresJavaExp;
    bool requiresCdacStudent;
    cout << "\nEnter minimum years of experience for shortlisting: ";
    cin >> minExperience;

    cout << "Require C++ experience for shortlisting? (1 for yes, 0 for no): ";
    cin >> requiresCppExp;

    cout << "Require java experience for shortlisting? (1 for yes, 0 for no): ";
    cin >> requiresJavaExp;

    cout << "Require CdacStudent for shortlisting? (1 for yes, 0 for no): ";
    cin >> requiresCdacStudent;



    vector<Candidate> shortlisted = manager.shortlistCandidates(minExperience, requiresCppExp,requiresJavaExp,requiresCdacStudent);

    // Output shortlisted candidates
    cout << "\nShortlisted candidates:\n";
    for (const auto& candidate : shortlisted) {
        cout << "Name: " << candidate.getName() << endl;
        cout << "Email: " << candidate.getEmail() << endl;
        cout << "Years of experience: " << candidate.getExperienceYears() << endl;
        cout << "C++ Experience: " << (candidate.hasCppExp() ? "Yes" : "No") << endl;
         cout << "Java Experience: " << (candidate.hasJavaExp() ? "Yes" : "No") << endl;

          cout << "Is candidate Cdac Student: " << (candidate.isCdacStudent() ? "Yes" : "No") << endl;
         cout << endl;
    }

    return 0;
}
