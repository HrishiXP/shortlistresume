

#ifndef CANDIDATEMANAGER_H_
#define CANDIDATEMANAGER_H_
#include<vector>
#include<string>
#include "Candidate.h"
using namespace std;
class CandidateManager {
private:
    vector<Candidate*> candidates;

public:
    ~CandidateManager();
    void addCandidate( Candidate *candidate);
    vector<Candidate> shortlistCandidates(int minExperience, bool requiresCppExp, bool requiresJavaExp, bool requireCdacStudent) const;
};





#endif /* CANDIDATEMANAGER_H_ */
