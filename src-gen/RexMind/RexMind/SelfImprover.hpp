#ifndef _SELFIMPROVER_HPP_
#define _SELFIMPROVER_HPP_

/*header*/

/**
 * Generated with Acceleo
 */
//package RexMind;

#include "SelfCandidate.hpp"
#include "..//Resources/PrimitiveTypes.hpp"
#include "..//Resources/DataTypes.hpp"
#include "..//Resources/Enumerations.hpp"
#include "..//Resources/vectorTemplate.hpp"
#include "..//Resources/TerminalIO.hpp"
// Start of user code Provide additional headers here for class SelfImprover.
// End of user code

/**
 * \authors Daniel Kaminski de Souza
 * \authors Marcelo Giesteira Campani
 */
/** 
 * Forward class declarations
 */
class SelfCandidate;

class SelfImprover 
{
// Start of user code Provide additional header members here for class SelfImprover.
// End of user code

   /******************************************
	*************  ASSOCIATIONS **************
	******************************************/
   /** \brief Representation: \<C>------->
    *
    *  Association Name: , attribute: selfCandidate
    */
    public: aVector<SelfCandidate*>* selfCandidateList;


   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	SelfImprover(aVector<SelfCandidate*>*  givenSelfCandidateList);

   /******************************************
	************** DESTRUCTOR ****************
	******************************************/
    public: ~SelfImprover();

   /** \brief OPERATION selfRewrite.
	* @param[in] givenSelfCandidate: 	*/
	public: void selfRewrite(SelfCandidate givenSelfCandidate);
   /** \brief OPERATION testNewSelf.
	* @param[in] givenSelfCandidate: 
	* @return return: 	*/
	public: SuccessFailure testNewSelf(SelfCandidate givenSelfCandidate);
};

#endif //_SELFIMPROVER_HPP_
