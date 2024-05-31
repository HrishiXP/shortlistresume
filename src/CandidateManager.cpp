#include "CandidateManager.h"
using namespace std;

CandidateManager::~CandidateManager() {
    for (Candidate* candidate : candidates) {
        delete candidate;
    }
}

// Adds a candidate to the list
void CandidateManager::addCandidate(Candidate *candidate) {
    candidates.push_back(candidate);
}

// Shortlists candidates based on given criteria
vector<Candidate> CandidateManager::shortlistCandidates(int minExperience, bool requiresCppExp, bool requiresJavaExp, bool requiresCdacStudent) const {
    vector<Candidate> shortlisted;

    for (const Candidate* candidate : candidates) {
        if (candidate->getExperienceYears() >= minExperience &&
            (!requiresCppExp || candidate->hasCppExp()) &&
            (!requiresJavaExp || candidate->hasJavaExp()) &&
            (!requiresCdacStudent || candidate->isCdacStudent())) {
            shortlisted.push_back(*candidate);
        }
    }

    return shortlisted;
}






