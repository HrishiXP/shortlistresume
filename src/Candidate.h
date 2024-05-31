#ifndef CANDIDATE_H_
#define CANDIDATE_H_

#include <string>
using namespace std;

class Candidate {
private:             //encapsulation achived

    string name;
    string email;
    int experienceYears;
    bool hasCppExperience;
    bool hasJavaExperience;
    bool cdacStudent;

public:

    // Constructor
    Candidate(const string& name, const string& email, int experienceYears, bool hasCppExperience, bool hasJavaExperience, bool cdacStudent );

    // Member functions
    string getName() const;
    string getEmail() const;
    int getExperienceYears() const;
    bool hasCppExp() const;
    bool hasJavaExp() const;
    bool isCdacStudent() const;
};

#endif // CANDIDATE_H_




