/**
 * Generated with Acceleo
 */
//package RexMind;

#include "SelfImprover.hpp"
#include "SelfCandidate.hpp"


// Start of user code Provide additional includes here for class SelfImprover.
// End of user code

/**
 * \authors Daniel Kaminski de Souza
 * \authors Marcelo Giesteira Campani
 */
// Start of user code Provide additional source members here for class SelfImprover.
// End of user code

SelfImprover::SelfImprover(aVector<SelfCandidate*>*  givenSelfCandidateList)

{
	this->selfCandidateList = givenSelfCandidateList;

}

SelfImprover::~SelfImprover()
{
	selfCandidateList->erase();
	delete selfCandidateList;
}

void SelfImprover::selfRewrite(SelfCandidate givenSelfCandidate)
{
// Start of user code for operation selfRewrite without return of the class SelfImprover.
// TO_DO operation SelfImprover::selfRewrite should be implemented.
// End of user code
}
SuccessFailure SelfImprover::testNewSelf(SelfCandidate givenSelfCandidate)
{
// Start of user code for operation testNewSelf with return of the class SelfImprover.
// TO_DO operation SelfImprover::testNewSelf should be implemented.
return Success;
// End of user code
}

