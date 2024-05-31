#include "Candidate.h"
using namespace std;

// Constructor implementation
Candidate::Candidate(const string& name, const string& email,
		int experienceYears, bool hasCppExperience, bool hasJavaExperience, bool cdacStudent)
    : name(name), email(email), experienceYears(experienceYears),
	  hasCppExperience(hasCppExperience), hasJavaExperience(hasJavaExperience),
	  cdacStudent(cdacStudent) {}

// Member function implementations
string Candidate::getName() const {
    return name;
}

string Candidate::getEmail() const {
    return email;
}

int Candidate::getExperienceYears() const {
    return experienceYears;
}

bool Candidate::hasCppExp() const {
    return hasCppExperience;
}

bool Candidate::hasJavaExp() const {
    return hasJavaExperience;
}

bool Candidate::isCdacStudent() const {
    return cdacStudent;
}
