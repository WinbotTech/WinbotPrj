#include "Anihilator/Anihilator/DataSmash.hpp"
#include "RexMind/RexMind/Actor.hpp"
#include "RexMind/RexMind/RmAgent.hpp"
#include "RexMind/RexMind/SelfCandidate.hpp"
#include "RexMind/RexMind/SelfImprover.hpp"

using namespace std;
/*************************************************************************************************/
/************************************ Object Factory Defines *************************************/
/*************************************************************************************************/
#define toAssociateAfterwards	nullptr
#define ownerWillClose			nullptr

//Start of user code Main custom area
//End of user code

/*************************************************************************************************/
/************************************ Const or Static Objects ************************************/
/*************************************************************************************************/
/*************************************************************************************************/
/************************************* Non Static Object Factory *********************************/
/*************************************************************************************************/
void objectFactory (Actor*& givenActor, DataSmash*& givenDataSmash, RmAgent*& givenRmAgent, SelfImprover*& givenSelfImprover)
{
	Actor*
		actor = new Actor(); 
	DataSmash*
		dataSmash = new DataSmash(/*n_states*/10); 
	RmAgent*
		rmAgent = new RmAgent(); 
	SelfCandidate*
		selfCandidateA = new SelfCandidate(); 
	SelfCandidate*
		selfCandidateB = new SelfCandidate(); 
	SelfCandidate*
		selfCandidateC = new SelfCandidate(); 
	SelfCandidate*
		selfCandidateD = new SelfCandidate(); 
	SelfCandidate*
		selfCandidateE = new SelfCandidate(); 
	aVector<SelfCandidate*>*
		selfImprover_selfCandidateList = new aVector<SelfCandidate*>(selfCandidateA, selfCandidateB, selfCandidateC, selfCandidateD, selfCandidateE); 
	SelfImprover*
		selfImprover = new SelfImprover(selfImprover_selfCandidateList); 
	/*********************************************************************************************/
	/************************************* Closing Associations **********************************/
	/*********************************************************************************************/

	//Start of user code custom area One.
	//End of user code
	givenActor = actor;
	givenDataSmash = dataSmash;
	givenRmAgent = rmAgent;
	givenSelfImprover = selfImprover;
}

/*************************************************************************************************/
/************************************************ Main *******************************************/
/*************************************************************************************************/
int main (int , char* []){
	Actor* theActor = nullptr;
	DataSmash* theDataSmash = nullptr;
	RmAgent* theRmAgent = nullptr;
	SelfImprover* theSelfImprover = nullptr;
	objectFactory(theActor, theDataSmash, theRmAgent, theSelfImprover);
	//Start of user code custom area Two.
	//End of user code

	return 0;	
}
