#ifndef _DATASMASH_HPP_
#define _DATASMASH_HPP_

/*header*/

/**
 * Generated with Acceleo
 */
//package Annihilator;

#include "..//Resources/PrimitiveTypes.hpp"
#include "..//Resources/DataTypes.hpp"
#include "..//Resources/Enumerations.hpp"
#include "..//Resources/vectorTemplate.hpp"
#include "..//Resources/TerminalIO.hpp"
// Start of user code Provide additional headers here for class DataSmash.
// End of user code

/**
 * \authors Daniel Kaminski de Souza
 * \authors Marcelo Giesteira Campani
 */
/** 
 * Forward class declarations
 */

class DataSmash 
{
// Start of user code Provide additional header members here for class DataSmash.
// End of user code
   /******************************************
	*************  OWNED ATTRIBUTES **********
	******************************************/
   /**
    *  The alphabet attribute.
    */
	public: uint8_t alphabet;
	

   /**
    *  The n_states attribute.
    */
	public: uint8_t n_states;
	

   /**
    *  The powersets attribute.
    */
	public: uint8_t powersets;
	

   /**
    *  The regex_functions attribute.
    */
	public: uint8_t regex_functions;
	

   /******************************************
	************** CONSTRUCTOR ***************
	******************************************/
    public: 
	DataSmash(uint8_t givenN_states);

   /** \brief OPERATION fwn_deviation.
	*/
	public: void fwn_deviation();
   /** \brief OPERATION phi.
	*/
	public: void phi();
   /** \brief OPERATION powerset.
	*/
	public: void powerset();
   /** \brief OPERATION regex.
	*/
	public: void regex();
   /** \brief OPERATION stream_copy.
	*/
	public: void stream_copy();
   /** \brief OPERATION stream_inversion.
	*/
	public: void stream_inversion();
   /** \brief OPERATION stream_summation.
	*/
	public: void stream_summation();
};

#endif //_DATASMASH_HPP_
